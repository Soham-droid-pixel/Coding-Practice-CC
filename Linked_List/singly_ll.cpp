#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

void insertAtStart(Node*& head, int data) {
    Node* newNode = new Node(data);

    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node(data);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {

    Node* head = NULL;

    insertAtStart(head, 20);
    insertAtStart(head, 10);

    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    printList(head);

    return 0;
}