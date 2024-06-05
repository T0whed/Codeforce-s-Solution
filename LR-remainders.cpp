//-------------SOLUTION USING TWO POINTERS---------------------//

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
    std::vector<int> v(n), vc;
    int sum = 1;
    for (auto &it : v) {cin >> it;}

    string s; cin >> s;

    int l = 0, r = n - 1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'L') {
            sum /= v[l];
            vc.push_back(v[l]);
            l++;
        }
        else {sum /= v[r]; vc.push_back(v[r]); --r;}
    }
    reverse(vc.begin(), vc.end());

    vector<int> ans; int mul = 1;
    for (int i = 0; i < vc.size(); ++i) {
        int x = vc[i] % m;
        mul *= x;
        ans.push_back(mul %= m);
    }
    reverse(ans.begin(), ans.end());
    for (auto &it : ans)cout << it << ' ';
    cout << '\n';
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
