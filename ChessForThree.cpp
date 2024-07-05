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
    int a, b, c; cin >> a >> b >> c;
    if ((a + b + c) % 2) {cout << -1 << '\n'; return;}

    if (!a) {cout << min(b, c) << "\n"; return;}
    if (!b) {cout << min(a, c) << "\n"; return;}
    if (!c) {cout << min(b, a) << "\n"; return;}

    int mx = max(a, max(b, c));
    cout << min(((a + b + c) / 2), (a + b + c - mx)) << "\n";
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
