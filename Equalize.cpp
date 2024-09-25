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
    std::set<int> s;
    for (int i = 0; i < n; ++i) {int x; cin >> x; s.insert(x);}

    std::vector<int> v(s.begin(), s.end());

    vector<int> ans;
    int maxi = 1;
    int j = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] - v[j] < n) {
            maxi = max(maxi, i - j + 1);
        }
        while (v[i] - v[j] > n and j < v.size())++j;

        // if (j >= v.size())--j;
        // cout << j << ' ' << i << ' ';
        // cout << j - i + 1 << '\n';
        maxi = max(maxi, j - i + 1);
    }

    cout << maxi << endl;
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
