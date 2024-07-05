#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define endl "\n"
const int N = 1e6 + 7;

void stdio() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve() {
    int n; cin >> n;
    map<int, int>m;
    for (int i = 1; i <= n; ++i) {int x; cin >> x; m[(abs(x - i))]++;}

    int ans = 0, f = 0;
    for (auto it : m) {
        ans = __gcd(ans, it.first);
        // if (it.first == 0)continue;
        // cout << it.first << ' ' << it.second << '\n';
        // if (it.second > f) {f = it.second; ans = it.first;}
    }
    cout << ans << '\n';
}

int32_t main() {
    FAST
    stdio();
    int t = 1, i = 0; cin >> t;
    while (t -- > 0) {
        //cout << "Case " << ++i << ": ";
        solve();
    }
    return 0;
}
