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
    int n; cin >> n; int arr[n]; for (int i = 0; i < n; ++i)cin >> arr[i];

    // int fxor = arr[0];

    // for (int i = 1; i < n; ++i) {fxor ^= arr[i];}
    // for (int i = 0; i < n; ++i) {fxor ^= arr[i];}
    // cout << fxor << "\n";
    if (n % 2 == 0)cout << 2 << '\n' << 1 << ' ' << n << '\n' << 1 << ' ' << n << '\n';
    else cout << 4 << '\n' << 1 << ' ' << n - 1 << '\n' << 1 << ' ' << n - 1 << '\n'
                  << n - 1 << ' ' << n << '\n' << n - 1 << ' ' << n << '\n';
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
