import java.util.HashSet;
import java.util.Scanner;

public class MarktheDustSweeper {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0){
            int n = sc.nextInt();
            long[] arr = new long[n];

            for(int i = 0; i < n; ++i)arr[i] = sc.nextLong();
            long cnt = 0, sum = 0; boolean exist = false;
            for(int i = 0; i < n-1; ++i){
                if(arr[i] > 0 && exist == false)exist = true;
                if(arr[i] == 0 && exist)cnt++;
                sum += arr[i];
            }
            System.out.println(sum == 0 ? sum : sum+cnt);

        }
    }
}

// 4
// 3
// 2 0 0
// 5
// 0 2 0 2 0
// 6
// 2 0 3 0 4 6
// 4
// 0 0 0 10
