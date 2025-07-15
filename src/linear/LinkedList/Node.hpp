//
//  Node.hpp
//  CPP-Hashing-Chaining
//
//  Created by mael macuglia on 14.07.2025.
//


#ifndef NODE_HPP
#define NODE_HPP


struct Node {
    int val_;
    Node *next_;
    // default Constructor
    Node();
    // Constructor with one parameter
    Node(int val);
    // Constructor with both parameters
    Node(int val , Node *next);

};

#endif // NODE_HPP
