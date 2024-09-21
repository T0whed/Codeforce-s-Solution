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
    std::vector<int> v(n);
    for (auto &it : v)cin >> it;

    map<int, int>mp; for (auto it : v)mp[it]++;


    int m; cin >> m;
    while (m -- > 0) {
        string s; cin >> s;
        map<char, int> mpp;  for (auto it : s)mpp[it]++;
        // cout << mp.size() << ' ' << mpp.size() << endl;
        if (mpp.size() != mp.size() or s.size() < n) {
            cout << "NO\n"; continue;
        }
        map<int, int>check;
        for (auto it : mp)check[it.second]++;
        bool imp = false;
        for (auto it : mpp) {
            if (check[it.second] <= 0) {imp = true; break;}
            check[it.second]--;
        }
        if (imp) {cout << "NO\n";}
        else cout << "YES\n";

    }


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
