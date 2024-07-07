import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class EveryoneLovestoSleep {
    static class pair<T, V>{
        private final T first;
        private final V second;

        public pair(T first, V second){
            this.first = first;this.second = second;
        }

        public T getFirst(){return first;}
        public V getSecond(){return second;}
    }
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt(), H = sc.nextInt(), M = sc.nextInt();

            List<pair<Integer, Integer>> v = new ArrayList<>();
            while(n--> 0){int x = sc.nextInt(), y = sc.nextInt(); v.add(new pair<>(x,y));}

            int minutes = H * 60 + M;
            int mn = Integer.MAX_VALUE;
            for (pair<Integer,Integer> it : v) {
                int minuts = it.first * 60 + it.second;
                int d = minuts - minutes;
                d = d < 0 ? d + 24 * 60 : d;
                mn = Math.min(mn, d);
            }
            System.out.println(mn/60 + " " + mn%60);
        }
        System.exit(0);
    }
}
