package java_exception_handling;
public class NumberFormatDemo {

    public static void main(String[] args) {

        String s = "123a";

        try {

            int num = Integer.parseInt(s);

            System.out.println("Number = " + num);

        } 
        catch (NumberFormatException e) {

            System.out.println("Invalid number format");

        }

        System.out.println("Program terminated normally...");
    }
}