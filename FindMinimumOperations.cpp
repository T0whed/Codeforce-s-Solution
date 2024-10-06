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
    int n, k; cin >> n >> k;
    if (k > n or k == 1) {cout << n << '\n'; return;}

    vector<int> v; v.push_back(1);
    v.push_back(k);
    int numb = n, x = k;
    while (numb > x) {
        x *= k;
        if (numb - x < 0) {x /= k; break;}
        v.push_back(x);
        //numb -= x;
        //cout << n << endl;
    }
    // for (auto it : v)cout << it << ' ';
    // cout << endl;

    int ans = 0;
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < v.size(); ++i) {
        if (n / v[i] == 0)continue;
        ans += n / v[i];
        n %= v[i];
        //cout << ans << ' ' << n << endl;;
    }
    cout << ans << endl;
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
