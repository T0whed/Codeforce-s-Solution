import java.util.Scanner;

public class XORSequence{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t--> 0){
            long x = sc.nextLong();
            long y = sc.nextLong();

            for(int i = 0; i <= 30; ++i){
                if(((x>>i)&1) != ((y >> i)&1)){
                    System.out.println((1<<i));
                    break;
                }
            }
        }
    }
}