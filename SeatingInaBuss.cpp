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
    std::vector<int> v(n + 1);
    for (auto i = 1; i <= n; ++i)cin >> v[i];

    int i = 0, j = 0;
    vector<int>vc(n + 1, 0);

    vc[v[1]] = v[1]; bool no = false;
    for (int i = 2; i <= n; ++i) {
        vc[v[i]] = v[i];
        if (v[i] == 1 && vc[2] == 0) {no = true; break;}
        if (v[i] == n && vc[n - 1] == 0) {no = true; break;}
        if (v[i] != 1 && v[i] != n && vc[v[i] - 1] == 0 && vc[v[i] + 1] == 0) {no = true; break;}
    }

    if (no)cout << "No\n";
    else cout << "Yes\n";

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
