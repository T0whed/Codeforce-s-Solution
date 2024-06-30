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
    int n, l, r; cin >> n >> l >> r;
    vector<int> v(n);
    for (auto &it : v)cin >> it;

    int cnt = 0, sum = 0;
    int i = 0;
    for (int j = 0; j < n; ++j) {
        sum += v[j];
        if (sum >= l and sum <= r) {cnt++; sum = 0; if (j + 1 < n)i = j + 1;}
        //cout << sum << endl;
        while (sum > r and sum != v[j] and i < n) {sum -= v[i++];}
        if (sum >= l and sum <= r) {cnt++; sum = 0; if (j + 1 < n)i = j + 1;;}
        if (sum == v[j] and sum > r)sum = 0;
    }
    cout << cnt << "\n";
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
// 3
// 0
// 1
// 4
// 0
// 3
// 1
// 2

