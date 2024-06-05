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

void solve() {
    int n, f, k; cin >> n >> f >> k;

    int arr[n + 1]; map<int, int> mp;
    for (int i  = 1; i <= n; ++i) {cin >> arr[i]; mp[arr[i]]++;}

    vector<pair<int, int>>p(n + 1);
    for (int i = 1; i <= n; ++i) {
        // cout << arr[i] << endl;
        p[i] = {arr[i], i};
    }

    sort(p.begin() + 1, p.end(), greater<pair<int, int>>());
    // for (int i = 1; i <= n; ++i) {
    //     cout << p[i].first << ' ';
    // }
    // cout << endl;

    bool happened = false;
    for (int i = 1; i <= k; ++i) {
        if (p[i].first == arr[f]) {happened = true;}
    }

    bool find = false;
    for (int i = k + 1; i  <= n; ++i) {
        if (p[i].first == arr[f]) {
            find = true;
            if (happened)cout << "Maybe\n";
            else cout << "NO\n";
            return;
        }
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
