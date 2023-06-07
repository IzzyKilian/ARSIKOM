#include <iostream>
#include "LinkedList.h"




int main() {
	
	int vals=0;
	
	
	LinkedList list1;
	
	
	
	list1.insertToHead(10);
	list1.insertToHead(20);
	list1.insertToHead(30);
	list1.insertToHead(40);
	list1.insertToHead(50);
	list1.insertToTail(60);
	list1.insertAfter(30,80);
	
	std::cout <<"head: " <<list1.head->val<<std::endl;
	std::cout <<"tail: " <<list1.tail->val<<std::endl;
	
	list1.printAll();
	
	LinkedList userlist1;
	while (vals!=5){
	
	std::cout<<"\n----------LinkedList----------\n";
	std::cout<<"1. Insert to head\n";
	std::cout<<"2. Insert to tail\n";
	std::cout<<"3. Insert after\n";
	std::cout<<"4. Print All\n";
	std::cout<<"5. Exit\n";
	
	std::cout<<"Input: ";
	std::cin>>vals;
		
		switch (vals){
			
			case 1:
				int usersL;
				if(userlist1.head !=NULL){
				userlist1.printAll();
				}
				
				std::cout<<"Insert To head: ";
				std::cin>>usersL;
				userlist1.insertToHead(usersL);
				userlist1.printAll();
				
				break;
				
			case 2:
				if(userlist1.head !=NULL){
				userlist1.printAll();
				}
				std::cout<<"Insert To tail: ";
				std::cin>>usersL;
				userlist1.insertToTail(usersL);
				userlist1.printAll();
				
				break;
				
			case 3:
				int A,B;
				std::cout<<"Insert After\n";
				std::cout<<"Insert Value: ";
				std::cin>>B;
				std::cout<<"After: ";
				std::cin>>A;
				userlist1.insertAfter(A,B);
				userlist1.printAll();
				
				break;
				
			
			case 4:
				userlist1.printAll();
				if(userlist1.head !=NULL){
				std::cout <<"head: " <<userlist1.head->val<<std::endl;
				std::cout <<"tail: " <<userlist1.tail->val<<std::endl;
				}
				break;
				
			case 5:
				std::cout<<"Exiting Program...";
				break;
			
			default:
				std::cout<<"Please input 1-4!\n";
				break;
				
		}
		
		
		
	}
	
	return 0;
}
