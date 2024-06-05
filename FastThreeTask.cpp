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
    vector<int> v(n);
    for (auto &it : v)cin >> it;

    int sum = accumulate(v.begin(), v.end(), 0);
    if (sum % 3 == 0) {cout << 0 << '\n'; return;}

    for (int i = 0; i < n; ++i) {
        if ((sum - v[i]) % 3 == 0) {cout << 1 << '\n'; return;}
    }
    if (sum % 3 == 2) {cout << 1 << '\n'; return;}
    cout << 2 << '\n';
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
