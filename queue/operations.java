class operations {

    static int[] q = new int[100];
    static int front = -1;
    static int rear = -1;

    static void enqueue(int x) {

        if(rear == q.length - 1) {
            System.out.println("Queue Overflow");
            return;
        }

        if(front == -1) {
            front = 0;
        }

        rear++;
        q[rear] = x;

        System.out.println(x + " inserted");
    }

    static void dequeue() {

        if(front == -1 || front > rear) {
            System.out.println("Queue Underflow");
            return;
        }

        System.out.println(q[front] + " removed");

        front++;

        if(front > rear) {
            front = rear = -1;
        }
    }

    static void peek() {

        if(front == -1) {
            System.out.println("Queue is Empty");
            return;
        }

        System.out.println("Front Element: " + q[front]);
    }

    static void display() {

        if(front == -1) {
            System.out.println("Queue is Empty");
            return;
        }

        for(int i = front; i <= rear; i++) {
            System.out.print(q[i] + " ");
        }

        System.out.println();
    }

    public static void main(String[] args) {

        enqueue(10);
        enqueue(20);
        enqueue(30);

        display();

        dequeue();

        peek();

        display();
    }
}