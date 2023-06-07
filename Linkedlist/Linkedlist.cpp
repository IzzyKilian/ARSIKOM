#include <iostream>
#include "LinkedList.h"


void LinkedList::insertToHead(int input){
	Node *newNode = new Node();
	newNode->val= input;
	
	newNode->next= head;
	head = newNode;
	
	if(tail==NULL)
	tail=head;
}

void LinkedList::printAll(){
	Node *tmp = head;
	
	if (tmp==NULL){
		std::cout<<"Linked List is Empty!!\n";
	}
	
	else{
	while(tmp!=NULL){
		std::cout<<tmp->val<<"->";
		tmp = tmp->next;
	}
	std::cout<<"NULL\n";
	}
	
	
}

void LinkedList::insertToTail(int input){
	Node *newNode = new Node();
	newNode->val= input;
	
	if (head == NULL) {
        LinkedList::insertToHead(input); /*i put this recursion function because if there is no tails or linked list is empty
										  Then it's just like inserting a node to head*/
        delete newNode;
    }
    else{
	
	Node *tmp= tail;
	tail->next = newNode;
	tail=newNode;
	}
}

void LinkedList::insertAfter(int x, int b){
	Node *newNode = new Node();
    	newNode->val = b;

    	Node *tmp = head;
    	bool checker = false;
    	if (head == NULL) {
        std::cout << "Error!! List is empty. Cannot insert after." << std::endl;
        delete newNode;
        checker = true;
    }

    	while(tmp != NULL){
            if(tmp->val == x){
            	newNode->next = tmp->next;
            	tmp->next = newNode;
            if(tmp == tail){
                tail = newNode;
            }
            
            checker = true;
            return;
        }
        tmp = tmp->next;
    }
    
    	if(checker == false){
    		std::cout << "Error: Value " << x << " not found in the list. Cannot insert after." << std::endl;
        delete newNode;
		}
	
	
}
