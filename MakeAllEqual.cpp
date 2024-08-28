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
    int n; cin >>  n;
    int arr[n]; for (int i = 0; i < n; ++i)cin >> arr[i];

    map<int, int>mp;
    for (int i = 0; i < n; ++i)mp[arr[i]]++;

    if (mp.size() == 1) {cout << 0 << '\n'; return;}

    int mx = 0, numb;
    for (auto it : mp) {
        if (it.second > mx) {mx = it.second; numb = it.first;}
    }

    int ans = 0;
    for (auto it : mp) {if (it.first != numb)ans += it.second;}

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
