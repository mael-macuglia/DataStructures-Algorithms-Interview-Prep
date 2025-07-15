//
//  Node.cpp
//  CPP-Hashing-Chaining
//
//  Created by mael macuglia on 14.07.2025.
//


#include "Node.hpp"

// Default Constructor
Node::Node() {
    val_ = 0;
    next_ = nullptr;
}

// Constructor with one parameter
Node::Node(int val) {
    val_ = val;
    next_ = nullptr;
}

// Constructor with both parameters
Node::Node(int val, Node* next) {
    val_ = val;
    next_ = next;
}
