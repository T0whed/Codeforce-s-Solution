import java.util.*;

public class MakeEqual {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t--> 0){
            int n = sc.nextInt();
            long [] arr = new long[n];

            long sum = 0;
            for(int i = 0;i < n; ++i){
                arr[i] = sc.nextLong(); sum += arr[i];
            }
            long avg = sum / n; boolean psbl = true;
            for(int i = 0;i < n - 1; ++i){
                if(arr[i] >= avg){arr[i + 1] += (arr[i] - avg);}
                else{psbl = false; break;}
            }
            if(arr[n - 1] != avg){psbl = false;}
            if(psbl) System.out.println("YES");
            else System.out.println("NO");

        }
    }
}
