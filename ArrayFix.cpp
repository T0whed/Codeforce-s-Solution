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

// // Step 1: Transfer map contents to a vector of pairs
// vector<pair<char, int>> vec(mp.begin(), mp.end());

// // Step 2: Sort the vector by the second element of the pairs (the counts)
// sort(vec.begin(), vec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
//     return a.second < b.second; // Sort in ascending order
// });


void solve() {
    int n; cin >> n;
    std::vector<int> v(n); for (auto &it : v)cin >> it;

    int x = v[0];
    for (int i = 1; i < n; ++i) {
        if (v[i] >= x) {
            if (v[i] > 10 and v[i] / 10 >= x and v[i] % 10 >= v[i] / 10) x = v[i] % 10;
            else x = v[i] / 10;
        }
        else {cout << "NO\n"; return;}
    }
    cout << "YES\n";
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
