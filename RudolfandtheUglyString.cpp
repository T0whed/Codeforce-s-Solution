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

    if (n < 3) {cout << 0 << '\n'; return; }

    int cnt = 0;
    for (int i = 0; i < s.size() - 2; ++i) {
        if (s[i] == 'p' and s[i + 1] == 'i' and s[i + 2] == 'e')cnt++;
        if (s[i] == 'm' and s[i + 1] == 'a' and s[i + 2] == 'p') {
            int ind = i + 2;
            if (ind + 2 < s.size()) {
                if (s[ind] == 'p' and s[ind + 1] == 'i' and s[ind + 2] == 'e')continue;
            }
            cnt++;
        }
    }
    cout << cnt << '\n';
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
