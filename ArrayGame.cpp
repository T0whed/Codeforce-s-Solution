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
    vector<int> arr, vc, vec; for (int i = 0; i < n; ++i) {int x; cin >> x; arr.push_back(x);};
    sort(arr.begin(), arr.end());
    if (k >= 3) {cout << 0 << '\n'; return;}


    for (int i = 1; i < n; ++i) {
        vc.push_back(arr[i] - arr[i - 1]);
    }
    sort(vc.begin(), vc.end());
    //cout << mn << '\n';
    if (k == 1) {cout << min(vc[0], arr[0]) << '\n'; return;}

    int mn = arr[0];
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int diff = abs(arr[i] - arr[j]);
            mn = min(diff, mn);
            auto it = upper_bound(arr.begin(), arr.end(), diff) - arr.begin();
            if (it != n)mn = min(mn, abs(diff - arr[it]));
            if (it - 1 >= 0 or it - 1 != n)mn = min(mn, abs(diff - arr[it - 1]));
        }
    }
    cout << mn << '\n';
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
