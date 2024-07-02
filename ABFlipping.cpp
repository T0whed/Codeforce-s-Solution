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

    int a = 0, ans = 0, ind   = -1;;
    for (int i = 0;  i < s.size() - 1; ++i) {
        if (s[i] == 'A' and s[i + 1] == 'A')a++;
        if (s[i] == 'A' and s[i + 1] == 'B') {
            ind = i + 1; break;
        }
    }
    if (ind > -1) {
        ans += a;
        ans += n - ind;
    }
    for (int i = s.size() - 1; i >= 0; --i) {if (s[i] == 'A')--ans; else break;}
    cout << max(ans, 0LL) << '\n';
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
