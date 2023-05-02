#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};


class Stack {
private:
    Node* top;
public:
    Stack() {
        top = nullptr;
    }

    ~Stack() {
        while (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    void push(int val) {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty!" << endl;
        }
        else {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        else {
            return top->data;
        }
    }

    bool isEmpty() {
        return top == nullptr;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    ~Queue() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }

    void enqueue(int val) {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = nullptr;
        if (front == nullptr) {
            front = newNode;
            rear = newNode;
        }
        else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty!" << endl;
        }
        else {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }

    int peek() {
        if (front == nullptr) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        else {
            return front->data;
        }
    }

    bool isEmpty() {
        return front == nullptr;
    }
};


int main() {
    Stack myStack;
    int stackVal;
    cout << "Enter values for the stack (enter -1 to stop): " << endl;
    while (true) {
        cin >> stackVal;
        if (stackVal == -1) {
            break;
        }
        myStack.push(stackVal);
    }
    cout << "Top of stack: " << myStack.peek() << endl;
    myStack.pop();
    cout << "New top of stack: " << myStack.peek() << endl;
    cout << "Is stack empty? " << myStack.isEmpty() << endl;

    Queue myQueue;
    int queueVal;
    cout << "Enter values for the queue (enter -1 to stop): " << endl;
    while (true) {
        cin >> queueVal;
        if (queueVal == -1) {
            break;
        }
        myQueue.enqueue(queueVal);
    }
    cout << "Front of queue: " << myQueue.peek() << endl;
    myQueue.dequeue();
    cout << "New front of queue: " << myQueue.peek() << endl;
    cout << "Is queue empty? " << myQueue.isEmpty() << endl;

    return 0;
}
