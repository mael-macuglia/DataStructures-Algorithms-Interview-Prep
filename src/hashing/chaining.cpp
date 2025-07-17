
#include "chaining.hpp"
#include <iomanip>
#include <stdexcept>
#include <algorithm>



// Hash function
int HashTable::hashfunc(int key) const {
    return key % table_size;
}


HashTable::HashTable(int size){
    table_size = size; 
    table = new Node*[size] ; 
    // initialise the table to null pointer 
    for(int i= 0 ; i<size; i++ ){
        table[i] = nullptr; 
    }
    std::cout << "HashTable created with size " << table_size << std::endl;
    std::cout << "All " << table_size << " buckets initialized to nullptr" << std::endl << std::endl;
}

void HashTable::sortedInsert(Node* &head, int key){
    // check if chain is empty 
    if(head==nullptr){
        // insert new node 
        Node *new_node = new Node(key); 
        head = new_node; 
        return; 
    }else{
        // search for val< key < next_val 
      Node *current = head; 
      while(current->next != nullptr && current->next->data < key )
      {
        current = current-> next; 
      }
      // insert new node 
      Node *new_node = new Node(key); 
      new_node-> next = current->next; 
      current->next = new_node;
    }
}

HashTable::Node* HashTable::searchinchain(Node* &head, int key) const{
    Node* p = head; 
    while(p!=0){
        if(p->data == key){
            return p; 
        }
        p = p->next;
    }
    return nullptr;
}


void HashTable::deleteChain(Node* head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// Destructor
HashTable::~HashTable() {
    // Delete all chains
    for (int i = 0; i < table_size; i++) {
        deleteChain(table[i]);
    }
    // Delete the dynamic array
    delete[] table;
    std::cout << "HashTable destroyed, all memory freed" << std::endl;
}

bool HashTable::deleteFromChain(Node*&head, int key){
    if(head == nullptr){
        return false;
    }
    Node *p = head; 
    while(p->next!= nullptr){
        if(p->next->data == key){
            //delete 
            Node* temp = p->next; 
            p->next = temp->next; 
            delete temp; 
            return true;
        }
    }
    return false;
} 

// Insert a key into the hash table
void HashTable::insert(int key) {
    int index = hashfunc(key);
    
    // Check if key already exists
    if (searchinchain(table[index], key) != nullptr) {
        std::cout << "Key " << key << " already exists!" << std::endl;
        return;
    }
    
    sortedInsert(table[index], key);
    std::cout << "Inserted " << key << " at index " << index << std::endl;
}

// Search for a key
bool HashTable::search(int key) const {
    int index = hashfunc(key);
    Node* result = searchinchain(table[index], key);
    return result != nullptr;
}


// Delete a key
bool HashTable::remove(int key) {
    int index = hashfunc(key);
    bool deleted = deleteFromChain(table[index], key);
    if (deleted) {
        std::cout << "Deleted " << key << " from index " << index << std::endl;
    } else {
        std::cout << "Key " << key << " not found!" << std::endl;
    }
    return deleted;
}


// Display the hash table
void HashTable::display() const {
    std::cout << std::endl << "=== Hash Table Contents (Size: " << table_size << ") ===" << std::endl;
    for (int i = 0; i < table_size; i++) {
        std::cout << "Bucket " << std::setw(2) << i << ": ";
        
        if (table[i] == nullptr) {
            std::cout << "nullptr (empty chain)";
        } else {
            Node* current = table[i];
            while (current != nullptr) {
                std::cout << current->data;
                if (current->next != nullptr) {
                    std::cout << " -> ";
                }
                current = current->next;
            }
        }
        std::cout << std::endl;
    }
    std::cout << "========================" << std::endl << std::endl;
}


// Get statistics
void HashTable::getStatistics() const {
    int totalElements = 0;
    int nonEmptyBuckets = 0;
    int maxChainLength = 0;
    
    for (int i = 0; i < table_size; i++) {
        int chainLength = 0;
        Node* current = table[i];
        
        if (current != nullptr) {
            nonEmptyBuckets++;
        }
        
        while (current != nullptr) {
            totalElements++;
            chainLength++;
            current = current->next;
        }
        
        maxChainLength = std::max(maxChainLength, chainLength);
    }
    
    std::cout << "=== Hash Table Statistics ===" << std::endl;
    std::cout << "Table size: " << table_size << std::endl;
    std::cout << "Total elements: " << totalElements << std::endl;
    std::cout << "Non-empty buckets: " << nonEmptyBuckets << std::endl;
    std::cout << "Empty buckets: " << (table_size - nonEmptyBuckets) << std::endl;
    std::cout << "Load factor: " << std::fixed << std::setprecision(2) 
              << getLoadFactor() << std::endl;
    std::cout << "Max chain length: " << maxChainLength << std::endl;
    std::cout << "============================" << std::endl << std::endl;
}

// Get load factor
double HashTable::getLoadFactor() const {
    int totalElements = 0;
    for (int i = 0; i < table_size; i++) {
        Node* current = table[i];
        while (current != nullptr) {
            totalElements++;
            current = current->next;
        }
    }
    return static_cast<double>(totalElements) / table_size;
}