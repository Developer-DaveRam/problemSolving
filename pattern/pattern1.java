import java.util.Scanner;

public class pattern1 {

    


    public static void main(String[] args) {

        Scanner nume = new Scanner(System.in);

        System.out.print("Enter the number of stars: ");
        int num = nume.nextInt();

        for (int i = 0; i < num; i++) {
            for (int j = 0; j < num; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

        nume.close();
    }
}