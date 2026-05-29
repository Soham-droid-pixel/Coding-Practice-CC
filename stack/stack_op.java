package stack;
import java.util.*;

class StackDemo {

    static int[] stack = new int[100];
    static int top = -1;

    static void push(int x) {

        if(top == stack.length - 1) {
            System.out.println("Stack Overflow");
            return;
        }

        top++;
        stack[top] = x;

        System.out.println(x + " pushed");
    }

    static void pop() {

        if(top == -1) {
            System.out.println("Stack Underflow");
            return;
        }

        System.out.println(stack[top] + " popped");
        top--;
    }

    static void peek() {

        if(top == -1) {
            System.out.println("Stack is Empty");
            return;
        }

        System.out.println("Top Element: " + stack[top]);
    }

    static void display() {

        if(top == -1) {
            System.out.println("Stack is Empty");
            return;
        }

        for(int i = top; i >= 0; i--) {
            System.out.print(stack[i] + " ");
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