import java.util.Scanner;

public class ChayaCalender{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        long t = sc.nextLong();
        while(t-->0){
            int n = sc.nextInt();
            Long arr[] = new Long[n];

            for(int i = 0; i < n; ++i)arr[i] = sc.nextLong();

            for(int i = 1; i < n; ++i){
                if(arr[i] <= arr[i - 1]){
                    Long d = arr[i-1] / arr[i];
                    ++d;
                    arr[i] *= d;
                }
            }
            System.out.println(arr[n-1]);
        }
    }
}