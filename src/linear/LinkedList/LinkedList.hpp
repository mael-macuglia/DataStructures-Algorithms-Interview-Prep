//
//  LinkedList.hpp
//  CPP-Hashing-Chaining
//
//  Created by mael macuglia on 14.07.2025.
//
#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "Node.hpp"
#include <cstddef>  // For size_t

class LinkedList{
private:
    struct Node *head;
    int size_;
public:
    // default constructor
    LinkedList():head(nullptr), size_(0){};


    // destructor 
    ~LinkedList(); 


    // methods 
    void add_back(int val);
    void display();
    void create_from_array(const int A[], int size);
    void insert(int val, size_t index);
    void delete_node( size_t index);
    
};



#endif // LINKEDLIST_HPP
