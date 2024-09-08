#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define endl "\n"
const int N = 1e6 + 7;

void stdio() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("tout.txt", "w", stdout);
#endif
}

// // Step 1: Transfer map contents to a vector of pairs
// vector<pair<char, int>> vec(mp.begin(), mp.end());

// // Step 2: Sort the vector by the second element of the pairs (the counts)
// sort(vec.begin(), vec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
//     return a.second < b.second; // Sort in ascending order
// });


void solve() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    std::vector<pair<int, int>> v;
    v.push_back({a, b}); v.push_back({c, d});
    sort(v.begin(), v.end());

    a = v[0].first; b = v[0].second; c = v[1].first; d = v[1].second;

    if (b < c) {cout << 1 << endl; return;}

    int ans = 0;
    a < c ? ++ans : ans = 0; //cout << ans << endl;
    ans += min(b, d) - c;


    int mn = min(b, d);
    if (b != d)++ans;
    cout << ans << '\n';

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
