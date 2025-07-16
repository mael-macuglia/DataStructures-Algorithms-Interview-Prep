//
//  test-LinkedList.cpp
//  DataStructures-Interview-Prep
//
//  Created by mael macuglia on 14.07.2025.
//

//
//  main.cpp
//  CPP-Hashing-Chaining
//
//  Created by mael macuglia on 14.07.2025.
//

#include <iostream>
#include "../src/linear/LinkedList/Node.hpp"
#include "../src/linear/LinkedList/LinkedList.hpp"


int main() {

    int A[] = {1,2,4,5,9,9};
    
    LinkedList l;
    l.display();
    l.add_back(5);
    l.display();
    l.create_from_array(A,6 );
    LinkedList l2;
    l2.create_from_array(A, 6);
    l2.display();
    l2.insert(1,1); 
    std::cout << std::endl; 
    l2.display();
    std::cout << std::endl; 
    l2.delete_node(2) ; 
    l2.display(); 
    std::cout << std::endl; 
    l2.delete_node(0) ; 
    std::cout << std::endl; 
    l2.display(); 
    return 0;
}
