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
    int n, m, q; cin >> n >> m >> q;

    int arr[m]; for (int i = 0; i < m; ++i)cin >> arr[i];
    int k; cin >> k;

    sort(arr, arr + m);


    if (k < arr[0] || k > arr[m - 1]) {
        if (k < arr[0]) {cout << arr[0] - 1 << '\n';}
        else cout << n - arr[m - 1] << '\n';
        return;
    }

    int d = arr[m - 1] - arr[0];
    if (d - 1 <= 2) {
        cout << 1 << '\n'; return;
    }

    --d;
    if (d % 2)cout << d / 2 + 1 << '\n';
    else cout << d / 2 << '\n';

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