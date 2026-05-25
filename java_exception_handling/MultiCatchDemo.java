package java_exception_handling;

public class MultiCatchDemo {

    public static void main(String[] args) {

        int arr[] = {1, 2};

        try {

            System.out.println(arr[5]);

        } 
        catch (ArithmeticException | ArrayIndexOutOfBoundsException e) {

            System.out.println("Exception handled");

        }

        System.out.println("Program ended normally...");
    }
}