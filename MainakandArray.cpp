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

    if (n == 1) {cout << 0 << '\n'; return;}

    //if (v.back() < *v.begin())swap(v.back(), *v.begin());
    int mx = *max_element(v.begin() + 1, v.end());
    int ans1 = mx - *v.begin();
    int mn = *min_element(v.begin(), v.end() - 1);
    int ans2 = v.back() - mn;
    //cout << ans1 << ' ' << ans2 << '\n';
    int ans = max(ans1, ans2);
    for (int i = 0; i < n - 1; ++i) {
        ans = max(ans, v[i] - v[i + 1]);
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
