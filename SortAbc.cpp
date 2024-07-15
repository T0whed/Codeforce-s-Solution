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
    vector<int> v(n + 1), p(n + 1);
    for (auto i = 1; i <= n; ++i) {cin >> v[i]; p[v[i]] = i;}
    //cout << n << endl;
    int cnt = 0; vector<pair<int, int>>st;
    // for (int i = 1; i <= n; ++i)cout << v[i] << ' ';
    // cout << endl;
    for (int i = 1; i <= n; ++i) {
        //cout << i << ' ' << v[i] << '\n';
        if (v[i] == i)continue;
        //cnt++;

        st.push_back({i, p[i]});
        swap(p[v[i]], p[v[p[i]]]);
        //cout << i << "f " << v[i] << endl;
        swap(v[i], v[v[i]]);
    }

    // cout << cnt << '\n';
    // for (int i = 1; i <= n; ++i) cout << v[i] << ' ';
    // cout << endl;
    cout << st.size() << '\n';
    //vector<pair<int, int>> p(st.begin(), st.end());
    for (auto it : st) {
        cout << it.first << ' ' << it.second << '\n';
    }

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
