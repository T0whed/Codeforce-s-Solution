#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define endl "\n"
const int N = 1e5 + 7;

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

vector<int> g[N];
bool vis[N];
int pos[N];
int lim[N];

int dfs(int n, int cnt, int ind, string & s) {
    vis[n - 1] = true;
    if (s[n - 1] == '0')cnt++;
    pos[n] = ind;

    for (auto it : g[n]) {
        if (!vis[it])dfs(it, cnt, ind, s);
    }

    return cnt;
}

void solve() {
    int n; cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)cin >> arr[i];
    string s; cin >> s;
    int ans[n + 1];
    for (int i = 1; i <= n; i++)
    {
        int a = arr[i];
        int b = arr[a];
        g[a].push_back(b);
    }
    int kk = 1;
    vector<int>idk;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            int cnt = 0;
            int koto = dfs(i, cnt, kk, s);
            //cout<<kk<<endl;
            lim[kk] = cnt;
            kk++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        int where = pos[i];
        cout << lim[where] << " ";
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        vis[i] = 0;
        g[i].clear();
        lim[i] = 0;
        pos[i] = 0;
    }
    // int n; cin >> n;
    // vector<int>v(n + 1);
    // for (int i = 1; i <= n; ++i) {
    //     cin >> v[i];
    //     g[v[i]].push_back(v[v[i]]);
    // }
    // string s; cin >> s;

    // int ind = 1;
    // for (int i = 1; i <= n; ++i) {
    //     if (!vis[i]) {
    //         int cnt = dfs(i, 0, ind, s);
    //         val [ind] = cnt;
    //         ++ind;
    //     }
    // }
    // for (int i = 1; i <= n; ++i) {
    //     int x = pos[i];
    //     cout << val[x];
    // }

    // for (int i = 0; i < N; ++i) {
    //     vis[i] = false;
    //     g[i].clear();
    //     pos[i] = 0;
    //     val[i] = 0;
    // }
    // cout << endl;
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
