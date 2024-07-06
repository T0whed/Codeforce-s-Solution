import java.util.Scanner;

public class AlsoTryMinecraft {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), q = sc.nextInt();
        long []arr = new long[n];
        for(int i = 0; i < n; ++i)arr[i] = sc.nextInt();

        long[] psum = new long[n];
        psum[0] = 0;
        for(int i = 1; i < n; ++i){
            if(arr[i] < arr[i-1]){
            psum[i] = psum[i-1]+arr[i-1]-arr[i];}
            else psum[i] = psum[i-1];
        }
        // for(int i = 0;i  < n; ++i)System.out.println(psum[i]);
        // System.out.println("SuffixSum");
        long[] ssum = new long[n];
        ssum[n-1] = 0;
        for(int i = n-2; i >= 0; --i){
            if(arr[i] < arr[i+1]){
            ssum[i] = ssum[i+1]+arr[i+1]-arr[i];}
            else ssum[i] = ssum[i+1];
        }
        //for(int i = 0;i  < n; ++i)System.out.println(ssum[i]);

        while(q-->0){
            int s = sc.nextInt(), t = sc.nextInt();
            --s; --t;
            if(s < t)System.out.println(psum[t]-psum[s]);
            else System.out.println(ssum[t]-ssum[s]);
        }
        System.exit(0);
    }
}

// 7 6
// 10 8 9 6 8 12 7
// 1 2
// 1 7
// 4 6
// 7 1
// 3 5
// 4 2
