import java.util.Scanner;

public class MakeEqualAgain {

    public static long[] ReverseArray(long[] arr, int n) {
        long[] array = new long[n + 1];
        int j = n;
        for (int i = 1; i <= n; ++i) {
            array[j] = arr[i];
            j--;
        }
        return array;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            long[] arr = new long[n + 1];

            for (int i = 1; i <= n; ++i) {
                arr[i] = sc.nextLong();
            }

            int cnt = 1, cnt2 = 1;
            for (int i = 2; i <= n; ++i) {
                if (arr[i] == arr[1])
                    ++cnt;
                else
                    break;
            }
            for (int i = n; i >= 1; --i) {
                if (arr[i] == arr[n])
                    ++cnt2;
                else
                    break;
            }
            if (cnt2 > cnt) {
                arr = ReverseArray(arr, n);
            }

            int ind = 1;
            for (int i = 2; i <= n; ++i) {
                if (arr[i] == arr[1])
                    ind = i;
                else
                    break;
            }

            int ans = n - ind, j = n;
            while (arr[j] == arr[1] & j > 0 & ind != n) {
                --ans;
                --j;
            }

            System.out.println(ans);
        }
    }
}
/*
 * 8
 * 6
 * 1 2 3 4 5 1
 * 7
 * 1 1 1 1 1 1 1
 * 8
 * 8 8 8 1 2 8 8 8
 * 1
 * 1
 * 2
 * 1 2
 * 3
 * 1 2 3
 * 7
 * 4 3 2 7 1 1 3
 * 9
 * 9 9 2 9 2 5 5 5 3
 * 
 * 4
 * 0
 * 2
 * 0
 * 1
 * 2
 * 6
 * 7
 * 
 */