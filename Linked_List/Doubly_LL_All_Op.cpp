#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

void insertAtBeginning(Node*& head, int data) {

    Node* newNode = new Node(data);

    if (head != NULL) {
        head->prev = newNode;
    }

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
    newNode->prev = temp;
}

void insertAtPosition(Node*& head, int data, int pos) {

    if (pos == 1) {
        insertAtBeginning(head, data);
        return;
    }

    Node* newNode = new Node(data);
    Node* temp = head;

    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }

    temp->next = newNode;
}

void deleteFromBeginning(Node*& head) {

    if (head == NULL) {
        return;
    }

    Node* temp = head;
    head = head->next;

    if (head != NULL) {
        head->prev = NULL;
    }

    delete temp;
}

void deleteFromEnd(Node*& head) {

    if (head == NULL) {
        return;
    }

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->prev->next = NULL;

    delete temp;
}

void deleteFromPosition(Node*& head, int pos) {

    if (head == NULL) {
        return;
    }

    if (pos == 1) {
        deleteFromBeginning(head);
        return;
    }

    Node* temp = head;

    for (int i = 1; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        return;
    }

    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }

    delete temp;
}

void search(Node* head, int key) {

    int pos = 1;

    while (head != NULL) {

        if (head->data == key) {
            cout << "Found at position " << pos << endl;
            return;
        }

        head = head->next;
        pos++;
    }

    cout << "Not Found" << endl;
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

    insertAtBeginning(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    insertAtPosition(head, 15, 2);

    printList(head);

    deleteFromBeginning(head);

    deleteFromEnd(head);

    deleteFromPosition(head, 2);

    printList(head);

    search(head, 20);

    return 0;
}