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
    vector<pair<int, int>> v;
    for (auto it = 0; it < n; ++it) {int x, y; cin >> x >> y; v.push_back({x, y});}

    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; ++i) {
        if (v[i + 1].first > v[i].first && v[i + 1].second < v[i].second) {cout << "Happy Alex\n"; return;}
    }
    cout << "Poor Alex\n";
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
