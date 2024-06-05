import java.util.Scanner;

public class FastThreeTask {
    public static Long SumOfArray(Long[] arr, int n){
        Long sum = 0L;
        for(int i = 0; i < n; ++i)sum += arr[i];
        return sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Long t = sc.nextLong();
        while(t-->0){
            int n = sc.nextInt();
            Long arr[] = new Long[n];

            for(int i = 0; i < n; ++i)arr[i] = sc.nextLong();

            Long sum = SumOfArray(arr, n);
            if (sum % 3 == 0) { System.out.println(0); continue;}

            boolean findans = false;
            for (int i = 0; i < n; ++i) {
                if ((sum - arr[i]) % 3 == 0) { findans = true; break;}
            }
            if (sum % 3 == 2 | findans) { System.out.println(1); continue;}
            System.out.println(2);
        }
    }
}
