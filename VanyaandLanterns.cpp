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
    int n; double l; cin >> n >> l;
    vector<int> v(n);
    for (auto &it : v)cin >> it;

    //v.push_back(l);
    // for (auto it : v)cout << it << ' ';
    // cout << endl;
    sort(v.begin(), v.end());

    int d = 0;
    for (int i = 0; i < v.size() - 1; ++i) {
        d = max(d, v[i + 1] - v[i]);
    }

    double x = (double)d / 2.0;
    double z = (double) * v.begin();
    double y = max(l - (double)v[n - 1], z);
    cout << fixed << setprecision(10) << max(x, y) << '\n';

}

int32_t main() {
    FAST
    stdio();
    int t = 1, i = 0; //cin >> t;
    while (t -- > 0) {
        //cout << "Case " << ++i << ": ";
        solve();
    }
    return 0;
}
