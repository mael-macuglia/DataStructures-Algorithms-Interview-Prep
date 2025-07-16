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

void LinkedList::insert(int val, size_t index){
    // check valid index
    if( size_< index){
        std::cout<< "Index out of range" << std::endl; 
        return; 
    }
    Node *p = head; 
    Node *new_node = new Node(val); 

    if(index == 0 ){
        new_node->next_ = p; 
        head = new_node; 
        size_++ ;
    }
    for(size_t i = 0 ; i < index -1 ; i++){
        p = p->next_; 
    }
    // insetrt new node 
    new_node->next_ = p->next_ ; 
    p->next_ = new_node; 
    size_ ++ ; 
}


LinkedList::~LinkedList(){
    while(head != nullptr ){
        Node *temp = head; 
        head = head->next_ ; 
        delete temp; 
    }
}

void LinkedList::delete_node( size_t index){
    if(index>size_ -1){
        std::cout<< "Index out of range" << std::endl;
        return; 
    }
    if(index == 0 ){
        Node *temp = head; 
        head = head->next_; 
        delete temp; 
        size_ --; 
        return; 
    }
    // traverse up to node before node to delete
    Node *p = head; 
    for(size_t i = 0 ; i < index-1 ; i++ ){
        p = p->next_;
    }
    Node *temp = p->next_; 
    p->next_ = temp->next_; 
    delete temp; 
    size_ --;

}