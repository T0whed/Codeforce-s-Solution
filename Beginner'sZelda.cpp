#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define endl "\n"
const int N = 1e5 + 7;
vector<int> g[N];

void stdio() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("tout.txt", "w", stdout);
#endif
}

// // Step 1: Transfer map contents to a vector of pairs
// vector<pair<char, int>> vec(mp.begin(), mp.end());

// // Step 2: Sort the vector by the second element of the pairs (the counts)
// sort(vec.begin(), vec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
//     return a.second < b.second; // Sort in ascending order
// });


void solve() {
    int n; cin >> n;
    // map<int, int> mp; --n;
    // for (int i = 0; i < n * 2; ++i) {int x; cin >> x; mp[x]++;}

    // int cnt = 0;
    // for (auto it : mp)if (it.second == 1)cnt++;

    // cout << ++cnt / 2 << '\n';

    for (int i = 0; i < n - 1; ++i) {
        int u, v; cin >> u >> v; --u; --v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int cnt = 0;
    for (auto it : g) {
        if (it.size() == 1)cnt++;
    }

    cout << ++cnt / 2 << '\n';
    for (int  i = 0; i < N; ++i)g[i].clear();
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
