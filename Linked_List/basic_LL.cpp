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

// Insert at end
Node* insert(Node* head, int data) {

    Node* newNode = new Node(data);

    // If list is empty
    if (head == NULL) {
        return newNode;
    }

    Node* temp = head;

    // Move to last node
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Connect last node to new node
    temp->next = newNode;

    return head;
}

// Print linked list
void printList(Node* head) {

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int main() {

    Node* head = NULL;

    // Insert elements
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);

    // Print list
    printList(head);

    return 0;
}