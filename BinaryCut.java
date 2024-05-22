import java.util.Scanner;

public class BinaryCut{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();

        while(t--> 0){
            long ans = 1, cnt = 0;
            String s = sc.nextLine();

            for(int i = 0; i < s.length() - 1; ++i){
                if(s.charAt(i)== '1' && s.charAt(i + 1)== '0')++ans;
                if(s.charAt(i)== '0' && s.charAt(i + 1)== '1'){
                    if(cnt == 0){++cnt; continue;}
                    ++ans;
                }
            }
            
            System.out.println(ans);
        }
    }   
}
/*
6
11010
00000000
1
10
0001111
0110
3
1
1
2
1
2*/

