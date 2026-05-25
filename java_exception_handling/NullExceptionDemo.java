package java_exception_handling;
public class NullExceptionDemo {

    public static void main(String[] args) {

        String s = null;

        try {

            int length = s.length();

            System.out.println("Length = " + length);

        } 
        catch (NullPointerException e) {

            System.out.println("String is null");

        }

        System.out.println("Program continues normally...");
    }
}