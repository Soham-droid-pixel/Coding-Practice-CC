#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

void push(int x) {

    Node* newNode = new Node();

    newNode->data = x;
    newNode->next = top;

    top = newNode;

    cout << x << " pushed\n";
}

void pop() {

    if(top == NULL) {
        cout << "Stack Underflow\n";
        return;
    }

    cout << top->data << " popped\n";

    Node* temp = top;
    top = top->next;

    delete temp;
}

void peek() {

    if(top == NULL) {
        cout << "Stack is Empty\n";
        return;
    }

    cout << "Top Element: " << top->data << endl;
}

void display() {

    if(top == NULL) {
        cout << "Stack is Empty\n";
        return;
    }

    Node* temp = top;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    push(10);
    push(20);
    push(30);

    display();

    pop();

    peek();

    display();

    return 0;
}