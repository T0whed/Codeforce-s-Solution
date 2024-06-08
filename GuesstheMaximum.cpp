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
    vector<int>v(n), mx;
    for (auto &it : v)cin >> it;

    mx .push_back(max(v[0], v[1]));
    for (int i = 1; i < n - 1; ++i) {
        mx.push_back(max(v[i], v[i + 1]));
    }

    int mn = *min_element(mx.begin(), mx.end());
    cout << mn - 1 << '\n';

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
/*
3
1
0
15
9
2
*/