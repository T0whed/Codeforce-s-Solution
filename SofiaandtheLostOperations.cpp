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
    std::vector<int> a(n), b(n);
    for (auto &it : a)cin >> it;
    for (auto &it : b)cin >> it;

    int m; cin >> m;
    vector<int>d(m);
    map<int, int>mp, mp2;

    for (int i = 0; i < m; ++i) {cin >> d[i]; mp[d[i]]++;}
    for (int i = 0; i < n; ++i)mp2[b[i]]++;

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i]  != b[i]) {
            if (mp[b[i]]) {mp[b[i]]--; cnt++;}
            else {cout << "NO\n"; return;}
        }
    }

    int x = d[m - 1];
    bool exist = false;
    int f = count(b.begin(), b.end(), x);
    if (!f) {cout << "NO\n"; return;}

    cout << "YES\n";
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
