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
    string s; cin >> s;

    if (n == 1 and s.back() == '1') {cout << "NO\n"; return;}
    int cnt = count(s.begin(), s.end(), '1');

    int ind = -1;
    for (int i = 0; i < s. size(); ++i) {if (s[i] == '1') {ind = i; break;}}

    if (cnt % 2) {cout << "NO\n"; return;}
    if (cnt == 2 and s[ind + 1] == '1') {cout << "NO\n"; return;}
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
