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
    vector<int> v(n), vc(n + 1);
    for (auto &it : v)cin >> it;
    for (auto &it : vc)cin >> it;

    int exist = count(v.begin(), v.end(), vc.back()); int append = 0, ans = 0;
    if (exist)append = 1;


    int mn = 1e15;
    for (int i = 0; i < n; ++i) {
        int x = v[i], y = vc[i];
        ans += abs(x - y);
        mn = min(abs(x - vc.back()), mn);
        v[i] = vc[i];
        if (x > y)swap(x, y);
        if (vc.back() >= x and vc.back() <= y)append = 1;
    }

    if (append == 0) {
        sort(v.begin(), v.end());
        for (auto it : v)mn = min(abs(it - vc.back()), mn);
        //cout << mn << endl;
        append += ++mn;
    }
    //cout << ans << ' ' << append << endl;
    cout << ans + append << '\n';
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
