package java_exception_handling;

public class FinallyDemo {

    public static void main(String[] args) {

        int a = 10;
        int b = 0;

        try {

            int result = a / b;

            System.out.println("Result = " + result);

        } 
        catch (ArithmeticException e) {

            System.out.println("Error occurred");

        } 
        finally {

            System.out.println("Program Ended");

        }
    }
}