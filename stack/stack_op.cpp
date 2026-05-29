#include <iostream>
using namespace std;

int stack[100];
int top = -1;
int stackSize = 100;

void push(int x) {

    if(top == stackSize - 1) {
        cout << "Stack Overflow\n";
        return;
    }

    top++;
    stack[top] = x;

    cout << x << " pushed\n";
}

void pop() {

    if(top == -1) {
        cout << "Stack Underflow\n";
        return;
    }

    cout << stack[top] << " popped\n";
    top--;
}

void peek() {

    if(top == -1) {
        cout << "Stack is Empty\n";
        return;
    }

    cout << "Top Element: " << stack[top] << endl;
}

void display() {

    if(top == -1) {
        cout << "Stack is Empty\n";
        return;
    }

    for(int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
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