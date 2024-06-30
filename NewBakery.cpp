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
    int n, a, b; cin >> n >> a >> b;
    if (a >= b) {cout << n*a << "\n"; return;}
    int h = (b * (b + 1)) / 2;
    if (b - a >= n) {
        int r = b - a - n; r += a;
        //cout << r << endl;
        r = (r * (r + 1)) / 2;
        //cout << h << ' ' << r << endl;
        cout << (h - r) << "\n";
        return;
    }
    int l = (a * (a + 1)) / 2;

    //cout << h << endl;
    int ans = h - l; if (b - a == n) {cout << ans << "\n"; return;}
    //cout << ans << endl;
    cout << ans + (n - b + a)*a << "\n";
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
