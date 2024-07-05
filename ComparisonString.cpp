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
    int n, x; cin >> n;
    string s; cin >> s;
    set<int>st; set<char>str(s.begin(), s.end());

    if (str.size() == 1) {cout << n + 1 << '\n'; return;}

    int ans = 0, cnt = 0;;
    for (int i = 0; i < s.size(); ++i) {
        cnt++;
        if (i == n - 1 or s[i] != s[i + 1]) {ans = max(ans, cnt); cnt = 0;}
    }
    ans = max(ans, cnt);
    cout << ++ans << '\n';
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
