#include <iostream>
using namespace std;

int q[100];
int front = -1;
int rear = -1;
int queueSize = 100;

void enqueue(int x) {

    if(rear == queueSize - 1) {
        cout << "Queue Overflow\n";
        return;
    }

    if(front == -1) {
        front = 0;
    }

    rear++;
    q[rear] = x;

    cout << x << " inserted\n";
}

void dequeue() {

    if(front == -1 || front > rear) {
        cout << "Queue Underflow\n";
        return;
    }

    cout << q[front] << " removed\n";
    front++;

    if(front > rear) {
        front = rear = -1;
    }
}

void peek() {

    if(front == -1) {
        cout << "Queue is Empty\n";
        return;
    }

    cout << "Front Element: " << q[front] << endl;
}

void display() {

    if(front == -1) {
        cout << "Queue is Empty\n";
        return;
    }

    for(int i = front; i <= rear; i++) {
        cout << q[i] << " ";
    }

    cout << endl;
}

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    peek();

    display();

    return 0;
}