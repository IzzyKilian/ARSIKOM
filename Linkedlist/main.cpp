    #include <iostream>
    #include "LinkedList.h"
    using namespace std;


    int main(int argc,char** argv){

        linkedlist list1;

        list1.InsertToHead(10);
        list1.InsertToHead(20);
        list1.InsertToHead(30);
        list1.InsertToHead(40);
        list1.InsertToTail(50);


        cout << "head" << list1.head->value << endl;
        cout << "tail" << list1.tail->value << endl;
        cout << list1.head->next->next->value << endl;

        list1.PrintAll();

        linkedlist list2;

        list2.InsertToHead(24);
        list2.InsertAfter(24,30);

        list2.PrintAll();


        return 0;

    }
