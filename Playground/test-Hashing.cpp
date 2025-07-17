#include <iostream>
#include "../src/hashing/chaining.hpp" 
#include <vector>






// Test function for basic operations
void testHashTable() {
    std::cout << "=== Hash Table Operations Demo ===" << std::endl << std::endl;
    
    // Create hash table with custom size
    HashTable ht(7);  // Prime number for better distribution
    
    // Test insertions
    std::cout << "--- Inserting elements ---" << std::endl;
    std::vector<int> testData = {15, 50, 8, 29, 1, 36, 150};
    
    for (int key : testData) {
        ht.insert(key);
    }
    
    ht.display();
    ht.getStatistics();
    
    // Test search
    std::cout << "--- Testing search ---" << std::endl;
    std::vector<int> searchKeys = {22, 99, 8, 50, 1};
    
    for (int key : searchKeys) {
        bool found = ht.search(key);
        std::cout << "Search " << key << ": " 
                  << (found ? "FOUND" : "NOT FOUND") << std::endl;
    }
    std::cout << std::endl;
    
    // Test deletion
    std::cout << "--- Testing deletion ---" << std::endl;
    std::vector<int> deleteKeys = {22, 99, 8};
    
    for (int key : deleteKeys) {
        ht.remove(key);
    }
    
    ht.display();
    ht.getStatistics();
}
int main(){

    
    testHashTable();

    return 0;
}