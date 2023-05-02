class Node{

public :
    int value;
    Node *next;

    Node(){
    next = NULL;
    }
};

class linkedlist {

public:
    Node *head;
    Node *tail;

    void InsertToHead(int);
    void InsertToTail(int);
    void InsertAfter(int,int);


    void deleteFromHead();
    void deleteFromTail();
    void deleteByValue(int);

    void PrintAll();

    linkedlist(){

    head = tail = NULL;

    }




};
