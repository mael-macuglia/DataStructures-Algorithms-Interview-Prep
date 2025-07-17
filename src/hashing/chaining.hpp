#ifndef CHAINING_HPP
#define CHAINING_HPP


#include <iostream> 

class HashTable{
    
    private: 
    // node structure for chaining     
    struct Node
        {
            int data; 
            Node *next; 
            Node():data(0),next(nullptr){};
            Node(int val): data(val),next(nullptr){};
        };
        
        int table_size; 
        Node **table; 

        // private helpers 
        int hashfunc(int key) const;
        void sortedInsert(Node* &head, int key);
        bool deleteFromChain(Node*& head, int key);
        Node* searchinchain(Node* &head, int key) const; 
        void deleteChain(Node* head);
    public:
        // constructor 
        HashTable(int size = 10); 
        // // destructor 
        ~HashTable(); 

        // // Getter for table size
        // int getTableSize() const;

        // // Core hash table operations
        void insert(int key);
        bool search(int key) const;
        bool remove(int key);
        void display() const;
        double getLoadFactor() const;
        void getStatistics() const;

};











#endif