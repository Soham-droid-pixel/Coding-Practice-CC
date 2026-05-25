package java_exception_handling;

public class MultipleCatchDemo {

    public static void main(String[] args) {

        int arr[] = {1, 2, 3};

        try {

            // Invalid array index
            System.out.println(arr[5]);

            // Division by zero
            int a = 10 / 0;

        } 
        catch (ArrayIndexOutOfBoundsException e) {

            System.out.println("Array error");

        } 
        catch (ArithmeticException e) {

            System.out.println("Arithmetic error");

        }

        System.out.println("Program ended normally...");
    }
}