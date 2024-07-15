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
    int n, m, k; cin >> n >> m >> k;
    string s; s.push_back('L');
    for (int i = 0; i < n; ++i) {char c; cin >> c; s.push_back(c);}
    s.push_back('L');

    int cnt = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'C') {cnt++; if (cnt >= m) {cout << "NO\n"; return;}}
        else cnt = 0;

    }
    int cnt1 = 0;
    for (int i = 0; i < s.size() - 1; ++i) {
        //if(s[i] == 'W' && s[i+1] == 'C'){}
        if (s[i] == 'W' or s[i] == 'C') {
            cnt1++;
            //cout << cnt1 << endl;
            if (cnt1 >= m) {--k; if (k < 0 or s[i] == 'C') {cout << "NO\n"; return;}}
        }
        else cnt1 = 0;
    }
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
