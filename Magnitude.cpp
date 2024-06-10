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
    std::vector<int> v(n);
    for (auto &it : v)cin >> it;

    int suffix[n + 1];
    suffix[n] = 0;
    for (int i = n - 1; i >= 0; --i) {
        suffix[i] = suffix[i + 1] + v[i];
    }

    // for (int i = 0; i < n; ++i)cout << suffix[i] << ' ';
    // cout << endl;

    int ans = INT_MIN, sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += v[i];
        ans = max(ans, abs(sum) + suffix[i + 1]);
    }
    cout << ans << "\n";

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
