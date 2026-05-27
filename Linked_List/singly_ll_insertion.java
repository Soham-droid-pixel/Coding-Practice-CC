package Linked_List;

public class singly_ll_insertion {

    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    static Node head = null;

    static void insertAtStart(int data) {

        Node newNode = new Node(data);

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

        insertAtStart(20);
        insertAtStart(10);

        insertAtEnd(30);
        insertAtEnd(40);

        printList();
    }
}