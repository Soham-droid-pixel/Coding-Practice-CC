package java_exception_handling;

public class NestedFinallyDemo {

    public static void main(String[] args) {

        try {

            // Inner try-catch block
            try {

                int a = 10;
                int b = 2;

                int result = a / b;

                System.out.println("Result = " + result);

            } 
            catch (ArithmeticException e) {

                System.out.println("Arithmetic error");

            }

        } 
        finally {

            System.out.println("Outer finally executed");

        }

        System.out.println("Program ended normally...");
    }
}