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
    int n; cin >> n;

    if (n < 3) {
        cout << -1 << '\n';
        return;
    }

    vector<pair<int, int>> a, b, c;
    vector<int> v, vc, vec;
    for (int i = 0; i < n; ++i) {int x; cin >> x; v.push_back(x); a.push_back({x, i});};
    for (int i = 0; i < n; ++i) {int x; cin >> x; vc.push_back(x); b.push_back({x, i});};
    for (int i = 0; i < n; ++i) {int x; cin >> x; vec.push_back(x); c.push_back({x, i});};


    sort(a.begin(), a.end()); sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    vector<int> aa, bb, cc;
    for (int i = n - 1; i >= n - 3; --i) {
        aa.push_back(a[i].second);
    }
    for (int i = n - 1; i >= n - 3; --i) {
        bb.push_back(b[i].second);
    }
    for (int i = n - 1; i >= n - 3; --i) {
        cc.push_back(c[i].second);
    }

    int ans = 0;
    for (auto x : aa) {
        for (auto y : bb) {
            for (auto z : cc) {
                if (x != y && x != z && y != z) {
                    ans = max(ans, v[x] + vc[y] + vec[z]);
                }
            }
        }
    }
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
