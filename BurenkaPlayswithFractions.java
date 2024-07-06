import java.util.Scanner;

public class BurenkaPlayswithFractions{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-->0) {
            long a = sc.nextInt(), b = sc.nextInt(),c= sc.nextInt(), d = sc.nextInt();

            a = a*d; b = b* c;
            if(a == b){System.out.println(0);continue;}
            //System.out.println(a + " " + b);
            if((b!=0 && a%b == 0) ||(a!=0 && b%a == 0)){System.out.println(1);continue;}
            System.out.println(2);
        }
    }
}