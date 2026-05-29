package stack;
class stack_ll_use {

    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    static Node top = null;

    static void push(int x) {

        Node newNode = new Node(x);

        newNode.next = top;
        top = newNode;

        System.out.println(x + " pushed");
    }

    static void pop() {

        if(top == null) {
            System.out.println("Stack Underflow");
            return;
        }

        System.out.println(top.data + " popped");

        top = top.next;
    }

    static void peek() {

        if(top == null) {
            System.out.println("Stack is Empty");
            return;
        }

        System.out.println("Top Element: " + top.data);
    }

    static void display() {

        if(top == null) {
            System.out.println("Stack is Empty");
            return;
        }

        Node temp = top;

        while(temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }

        System.out.println();
    }

    public static void main(String[] args) {

        push(10);
        push(20);
        push(30);

        display();

        pop();

        peek();

        display();
    }
}