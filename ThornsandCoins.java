import java.util.*;
public class ThornsandCoins {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            String c = sc.nextLine();
            String s = sc.nextLine();

            int cnt = 0, ans = 0;
            for(int i = 0; i < s.length(); ++i){
                    if(s.charAt(i)=='*'){cnt++;
                    if(cnt >= 2)break;}
                    else{
                        if(s.charAt(i) == '@')ans++;
                        cnt = 0;
                    } 
            }
            System.out.println(ans);
        }
    }
}
