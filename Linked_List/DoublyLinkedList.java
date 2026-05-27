package Linked_List;

public class DoublyLinkedList {

    static class Node {
        int data;
        Node prev;
        Node next;

        Node(int data) {
            this.data = data;
            prev = null;
            next = null;
        }
    }

    static Node head = null;

    static void insertAtBeginning(int data) {

        Node newNode = new Node(data);

        if (head != null) {
            head.prev = newNode;
        }

        newNode.next = head;
        head = newNode;
    }

    static void insertAtEnd(int data) {

        Node newNode = new Node(data);

        if (head == null) {
            head = newNode;
            return;
        }

        Node temp = head;

        while (temp.next != null) {
            temp = temp.next;
        }

        temp.next = newNode;
        newNode.prev = temp;
    }

    static void insertAtPosition(int data, int pos) {

        if (pos == 1) {
            insertAtBeginning(data);
            return;
        }

        Node newNode = new Node(data);

        Node temp = head;

        for (int i = 1; i < pos - 1 && temp != null; i++) {
            temp = temp.next;
        }

        if (temp == null) {
            return;
        }

        newNode.next = temp.next;
        newNode.prev = temp;

        if (temp.next != null) {
            temp.next.prev = newNode;
        }

        temp.next = newNode;
    }

    static void deleteFromBeginning() {

        if (head == null) {
            return;
        }

        head = head.next;

        if (head != null) {
            head.prev = null;
        }
    }

    static void deleteFromEnd() {

        if (head == null) {
            return;
        }

        if (head.next == null) {
            head = null;
            return;
        }

        Node temp = head;

        while (temp.next != null) {
            temp = temp.next;
        }

        temp.prev.next = null;
    }

    static void deleteFromPosition(int pos) {

        if (head == null) {
            return;
        }

        if (pos == 1) {
            deleteFromBeginning();
            return;
        }

        Node temp = head;

        for (int i = 1; i < pos && temp != null; i++) {
            temp = temp.next;
        }

        if (temp == null) {
            return;
        }

        if (temp.next != null) {
            temp.next.prev = temp.prev;
        }

        if (temp.prev != null) {
            temp.prev.next = temp.next;
        }
    }

    static void search(int key) {

        Node temp = head;

        int pos = 1;

        while (temp != null) {

            if (temp.data == key) {
                System.out.println("Found at position " + pos);
                return;
            }

            temp = temp.next;
            pos++;
        }

        System.out.println("Not Found");
    }

    static void printList() {

        Node temp = head;

        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }

        System.out.println();
    }

    public static void main(String[] args) {

        insertAtBeginning(10);
        insertAtEnd(20);
        insertAtEnd(30);

        insertAtPosition(15, 2);

        printList();

        deleteFromBeginning();

        deleteFromEnd();

        deleteFromPosition(2);

        printList();

        search(20);
    }
}