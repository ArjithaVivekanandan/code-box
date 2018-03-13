import java.io.File;
import java.io.IOException;
import java.util.Scanner;

public class Palindrome {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("src/xyz.dat"));

        int q = sc.nextInt();
        sc.nextLine();

        for (int z = 0; z < q; z++) {
            String line = sc.nextLine();

            int max = 0;
            String maxP = "";

            for (int k = 0; k < line.length(); k++) {

                String p = calc(line.substring(k));

                if (p.length() > max) {
                    max = p.length();
                    maxP = p;
                }

            }

            System.out.println("Maximum Palindrome: " + maxP);

        }

    }

    public static String calc(String s) {
        if (s.length() == 0)
            return "";
        if (s.length() == 1 || (s.length() == 2 && s.charAt(0) != s.charAt(1)))
            return s.charAt(0) + "";
        if (s.length() == 2)
            return s;

        char[] arr = s.toCharArray();

        boolean match = false;
        int i = 0;
        for (i = arr.length - 1; i > 0; i--) {
            if (arr[i] == arr[0]) {
                match = true;
                break;
            }
        }

        int max = 0;
        String maxPalin = "";
        for (int k = 1; k < i; k++) {
            String p = calc(s.substring(k, i));
            if (p.length() > max) {
                max = p.length();
                maxPalin = p;
            }
        }

        if (match)
            return arr[0] + maxPalin + arr[0];
        return maxPalin;

    }

}
