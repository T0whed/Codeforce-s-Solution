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
    vector<pair<int, int>> v;
    vector<int>vc;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        v.push_back({x, i});
        vc.push_back(x);
    }
    vector<int> ans(n);

    sort(v.begin(), v.end());
    sort(vc.begin(), vc.end());
    int psum[n]; psum[0] = v[0].first;
    for (int i = 1; i < n; ++i) {
        psum[i] = psum[i - 1] + v[i].first;
    }
    // vector<int> ans(n);

    stack<int> stk;
    for (int i = 0; i < n; ++i) {
        stk.push(v[i].second);
        if (v[i + 1].first > psum[i] or i == n - 1) {
            while (!stk.empty()) {
                ans[stk.top()] = i;
                stk.pop();
            }
        }
    }

    for (auto it : ans)cout << it << ' ';
    cout << '\n';
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
