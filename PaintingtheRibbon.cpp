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
    int n, m, k; cin >> n >> m >> k;
    if (m == 1) {cout << "NO\n"; return;}

    int x = n / m;
    if (n % m)++x;
    cout << x << '\n';
    int p = n - x;
    if (k >= p) {cout << "NO\n"; return;}
    cout << "YES\n";
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
