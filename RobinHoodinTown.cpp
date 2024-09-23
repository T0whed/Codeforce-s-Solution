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
    vector<double> v(n);
    int sum = 0;
    for (auto &it : v) {cin >> it; sum += it;}

    if (n == 1 or n == 2) {
        cout << -1 << '\n'; return;
    }
    sort(v.begin(), v.end());

    // int avg = sum / n;
    int half = n % 2 ? (n + 1) / 2 : n / 2 + 1;
    // if (v[half - 1] < avg / 2) {cout << 0 << '\n'; return;}

    int l = 0, r = 1e18, ans = -1;
    while (l < r) {
        int mid = l + (r - l) / 2;
        int nsum = sum + mid;
        if (v[half - 1] * 2 * n < nsum) {
            //cout << v[half - 1] << ' ' << mid << '\n';
            ans = mid; r = mid ;
        }
        else l = mid + 1;
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
