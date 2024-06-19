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
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)cin >> arr[i];

    int ans = (arr[0] == 0 ? 1 : 0);
    int sum = arr[0], mx = arr[0];

    for (int i = 1; i < n; ++i) {
        mx = max(mx, arr[i]);
        sum += arr[i];
        //cout << sum << ' ' << mx << endl;
        if (sum - mx == mx)++ans;
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
