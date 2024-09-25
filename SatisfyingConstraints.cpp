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
    vector<int>one, two, three;

    for (int i = 0; i < n; ++i) {
        int x, y; cin >> x >> y;
        if (x == 1)one. push_back(y);
        if (x == 2)two.push_back(y);
        if (x == 3)three.push_back(y);
    }

    int start = *max_element(one.begin(), one.end());
    int end = *min_element(two.begin(), two.end());

    int ans = end - start + 1;
    // cout << ans << '\n';
    for (auto it : three) {
        if (it >= start && it <= end)--ans;
    }
    cout << max(0LL, ans) << '\n';
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
