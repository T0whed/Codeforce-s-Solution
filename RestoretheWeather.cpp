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
    int n, k; cin >> n >> k;
    std::vector<pair<int, int>> v, vc; vector<int>vec(n);

    for (int i = 0; i < n; ++i) {int x; cin >> x; v.push_back({x, i});}
    for (int i = 0; i < n; ++i) {int x; cin >> x; vc.push_back({x, i});}

    sort(v.begin(), v.end()); sort(vc.begin(), vc.end());

    for (int i = 0; i < n; ++i) {
        //cout << v[i].first << ' ' << v[i].second << ' ' << vc[i].first << ' ' << vc[i].second << '\n';
        vec[v[i].second] = vc[i].first;
    }
    for (auto it : vec)cout << it << ' ';
    cout << endl;
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
