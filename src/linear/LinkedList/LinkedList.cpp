//
//  LinkedList.cpp
//  CPP-Hashing-Chaining
//
//  Created by mael macuglia on 14.07.2025.
//

#include "LinkedList.hpp"
#include "iostream"



//    // Create from array
void LinkedList::create_from_array(const int A[], int size){
        if(head != nullptr){
            std::cout<< "Linked List Object not Empty !" << std::endl;
        }else{
            for(size_t i = 0 ; i< size; i++){
                add_back(A[i]);
            }
        }
    }

void LinkedList::add_back( int val){
    Node *new_node = new Node(val);
    
    //hedge case
    if(head == nullptr){
        head = new_node;
    }
    else{
      // traverse through list
        Node *current = head;
        while (current->next_ != nullptr){
            current = current->next_;
        }
        current->next_ = new_node;
    }
    size_ ++;
}


void LinkedList::display(){
    Node *current;
    current = head ;
    if(head == nullptr){
        std::cout<< "No Value" << std::endl;
    }else{
        //traverse though
        while(current != nullptr){
            std::cout << current->val_ << " " ;
            current = current->next_;
        }
    }
}
