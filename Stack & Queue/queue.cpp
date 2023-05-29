#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
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
