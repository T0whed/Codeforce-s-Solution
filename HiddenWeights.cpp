#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define endl "\n"
const int N = 2e5 ;
vector<pair<int, int>> g[N];
vector<bool> vis(N);
vector<int> ans(N);

void stdio() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

// // Step 1: Transfer map contents to a vector of pairs
// vector<pair<char, int>> vec(mp.begin(), mp.end());

// // Step 2: Sort the vector by the second element of the pairs (the counts)
// sort(vec.begin(), vec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
//     return a.second < b.second; // Sort in ascending order
// });

void dfs(int node) {
    if (vis[node])return;
    vis[node] = true;

    for (auto it : g[node]) {
        if (!vis[it.first]) {
            ans[it.first] += ans[node] + it.second;
            dfs(it.first);
        }
    }
}


void solve() {
    int n, m; cin >> n >> m;
    while (m-- > 0) {
        int u, v, w; cin >> u >> v >> w;
        --u; --v;
        g[u].push_back({v, w});
        g[v].push_back({u, -w});
    }

    for (int i = 0; i < n; ++i) {
        if (!vis[i])dfs(i);
    }

    for (int i = 0; i < n - 1; ++i)cout << ans[i] << ' ';
    cout << ans[n - 1] << '\n';

    // for (int i = 0; i < n; ++i) {
    //     g[i].clear();
    //     vis[i] = false;
    //     ans[i] = 0;
    // }
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
