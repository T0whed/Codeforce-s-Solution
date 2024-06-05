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
    int n, m; cin >> n >> m;
    string s; cin >> s;

    map<char, int> mp;
    for (int i = 0; i < s.size(); ++i)mp[s[i]]++;

    int ans = 0;
    for (char c = 'A'; c <= 'G'; ++c) {
        if (mp[c] < m) {
            ans += (m - mp[c]);
        }
    }
    cout << ans << "\n";
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
