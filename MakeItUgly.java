import java.util.Scanner;

public class MakeItUgly {
    static class Set{
        private int [] s ;
        private int size;
        public Set(){
            s = new int[10];
            size = 0;
        }
        private boolean check(int x){
            if(size == 0)return false;
            for(int i = 0; i < size; ++i){
                if(s[i] == x)return true;
            }
            return false;
        }
        void insert(int x){
            boolean exist = check(x);
            if(exist == false){
                if(size == s.length){
                    int[] tmp = new int[s.length * 2];
                    System.arraycopy(s, 0, tmp, 0, s.length);
                    s = tmp;
                }
                s[size++] = x;
            }
        }
        int size(){
            return size;
        }
    }
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        //sc.nextLine();

        while(t--> 0){
            int n = sc.nextInt();
            int arr[] = new int[n];

            Set set = new Set();

            for(int i = 0; i < n; ++i){arr[i] = sc.nextInt(); set.insert(arr[i]);}

            if(set.size() == 1){System.out.println(-1); continue;}
            if(arr[0] != arr[n-1]){System.out.println(0); continue;}
            int ind = -1, cnt = 0, cnt1 = 0;
            for (int i = 1; i < n; ++i) {if (arr[i] != arr[0]) {ind = i; break;} else cnt++; }
            int ind2 = -1;
            for (int i = n - 2; i >= 0; --i) {if (arr[i] != arr[n - 1]) { ind2 = i; break;} else cnt1++;}

            int cnt3 = Integer.MAX_VALUE, tmp = 0;
            for(int i = ind; i < n-1; ++i){
                if(arr[i+1] == arr[0])tmp++;
                else{cnt3 = Math.min(cnt3, tmp); tmp = 0;}
            }
            int ans = Math.min(cnt, cnt1);
            System.out.println(Math.min(++ans, cnt3));
        }
    }
    
}
//while submitting the above code why am I getting "Source should satisfy regex [^{}]*public\s+(final)?\s*class\s+(\w+).*"