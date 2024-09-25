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
    int n, p, les, t; cin >> n >> p >> les >> t;
    // int tt = t * 2;
    // if (tt < les) {
    //     int day = p / les;
    //     cout << n - day << '\n';
    //     return;
    // }

    int task = n / 7 + (n % 7 != 0);
    //cout << task << '\n';


    int l = 0, r = n;
    while (r - l > 1) {
        int mid = l + (r - l) / 2;
        if (mid * les + min(task, mid * 2)*t >= p)r = mid;
        else l = mid;
    }
    // cout << r << endl;
    cout << n - r << '\n';
}

int32_t main() {
    FAST
    stdio();
    int t = 1, i = 0; cin >> t;
    while (t -- > 0) {
        //cout << "Case " << ++i << ":\n";
        solve();
    }
    return 0;
}
