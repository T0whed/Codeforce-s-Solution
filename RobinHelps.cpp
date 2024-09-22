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

    int sum = 0, cnt = 0;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        if (x == 0 && sum) {++cnt; --sum;}
        if (x >= k)sum += x;
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
