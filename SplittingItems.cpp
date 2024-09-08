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
    int n, k; cin >> n >> k;
    std::vector<int> v(n);

    for (auto &it : v)cin >> it;

    sort(v.rbegin(), v.rend());

    for (int i = 1; i < n; i += 2) {
        int d = v[i - 1] - v[i];
        // cout << d << endl;
        if (k >= d)v[i] += d; else {v[i] += k; break;}
        if (k - d >= 0)k -= d;
    }
    vector<int> vc, vec;
    for (auto i = 0; i < n; ++i) {
        if (i % 2 == 0)vc.push_back(v[i]); else vec.push_back(v[i]);
    }
    // for (auto it : vc)cout << it << ' ';
    // cout << endl;
    // for (auto it : vec)cout << it << ' ';
    // cout << endl;

    int sum = 0, sum1 = 0;
    for (auto it : vc)sum += it;
    for (auto it : vec)sum1 += it;
    // cout << sum << ' ' << sum1 << endl;

    cout << sum - sum1 << '\n';

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
