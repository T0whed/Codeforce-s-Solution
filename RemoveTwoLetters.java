import java.util.Scanner;

public class RemoveTwoLetters {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n  = sc.nextInt();
            sc.nextLine();
            String s = sc.nextLine();
            //System.out.println(s);

            int cnt = 0;
            for(int i = 0; i < s.length()-2; ++i){
                if(s.charAt(i) == s.charAt(i+2))cnt++;
            }
            System.out.println(--n-cnt);
        }
    }
}

// 7
// 6
// aaabcc
// 10
// aaaaaaaaaa
// 6
// abcdef
// 7
// abacaba
// 6
// cccfff
// 4
// abba
// 5
// ababa
