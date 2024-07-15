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
    int n, H, M; cin >> n >> H >> M;
    std::vector<pair<int, int>> v;
    for (int i = 0;  i < n; ++i) {
        int x, y; cin >> x >> y;
        v.push_back({x, y});
    }
    int minutes = H * 60 + M;
    int mn = INT_MAX;
    for (auto it : v) {
        int minuts = it.first * 60 + it.second;
        int d = minuts - minutes;
        d = d < 0 ? d + 24 * 60 : d;
        mn = min(mn, d);
    }
    cout << mn / 60 << ' ' << mn % 60 << '\n';
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
