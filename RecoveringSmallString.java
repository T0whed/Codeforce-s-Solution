import java.util.*;

public class RecoveringSmallString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t--> 0){
            int n = sc.nextInt();

            String str = "";
            if(n / 26 == 3){
                System.out.println("zzz");
                continue;
            }
            if(n / 26 == 2){
                if(n == 52){System.out.println("ayz"); continue;}
                str += "zz";
                int x = n - 52-1;
                char c =(char)x;
                c+= 'a'; str += c;
                StringBuilder sb = new StringBuilder(str);
                String reversed = sb.reverse().toString();
                System.out.println(reversed);
                continue;

            }
            if(n / 26 == 1 & n > 27){
                str += 'z'; n -= 26;
                int x = n - 1-1;
                char c =(char)x;
                c+= 'a'; str+= c; str += 'a';
                StringBuilder sb = new StringBuilder(str);
                String reversed = sb.reverse().toString();
                System.out.println(reversed);
                continue;
            }

            else{
                str += "aa";
                int x = n - 2-1;
                char c =(char)x;
                c+= 'a'; str+= c;
                System.out.println(str);
            }
            
        }
        
    }
}
