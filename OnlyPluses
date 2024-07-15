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
    vector<int> v(3);
    for (auto &it : v)cin >> it;
    sort(v.begin(), v.end());

    int ti = 5;
    while (ti-- > 0) {
        v[0]++;
        sort(v.begin(), v.end());
    }
    int m = 1 ;
    for (auto it : v)m *= it;
    cout << m << '\n';
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
