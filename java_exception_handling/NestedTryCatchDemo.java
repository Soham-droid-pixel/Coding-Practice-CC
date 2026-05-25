package java_exception_handling;

public class NestedTryCatchDemo {

    public static void main(String[] args) {

        try {

            // Inner try-catch block
            try {

                int a = 10 / 0;

            } 
            catch (ArithmeticException e) {

                System.out.println("Inner catch: Arithmetic error");

            }

            // Array operation after inner block
            int arr[] = {1, 2};

            System.out.println(arr[5]);

        } 
        catch (ArrayIndexOutOfBoundsException e) {

            System.out.println("Outer catch: Array error");

        }

        System.out.println("Program ended normally...");
    }
}