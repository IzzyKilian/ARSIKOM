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

    return 0;
}
