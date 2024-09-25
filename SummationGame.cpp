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
    int n, k, x; cin >> n >> k >> x;
    int sum = 0;
    std::vector<int> v(n), remove; for (auto &it : v) {cin >> it; sum += it;}
    if (n == 1) {cout << 0 << '\n'; return;}

    sort(v.rbegin(), v.rend());
    // cout << sum << endl;

    int ng = 0, ans = 0, nsum = 0;
    for (int i = 0; i < n; ++i) {
        if (i < k)remove.push_back(v[i]);
        if (i >= k and ng < x) {v[i] *= -1; nsum += v[i]; ++ng;}
        if (i >= k + x)ans += v[i];
    }
    // for (auto it : v)cout << it << ' ';
    // cout << endl;
    // cout << ans << ' ' << nsum << '\n';

    //x = min(x, n - k);
    int mx = nsum, sum3 =  ans; vector<int> vec;
    vec.push_back(mx + sum3);
    for (int i = k - 1; i >= 0; --i) {
        int val = nsum;
        if (i + x < n)val += v[i + x] * -1;
        // cout << val << '\n';
        //cout << v[i + x] * -1 << '\n';
        if (i + x < n)sum3 += v[i + x] * -1;
        //cout << v[i] * -1;
        // cout << val << ' ' << v[i] << endl;;
        val += (v[i] *= -1);
        // cout << val  << '\n';
        nsum = val;
        vec.push_back(val + sum3);
        //cout << val + sum3 << '\n';
    }

    int mxx = LLONG_MIN;
    for (auto it : vec) {
        mxx = max(mxx, it);
    }
    // cout << endl;

    // int mxx = *max_element(vec.begin(), vec.end());
    // cout << mxx << endl;
    if (mxx >= 0) {cout << mxx << '\n'; return;}
    mxx < 0 && k == n ? cout << 0 : cout << mxx;
    cout << '\n';
    //cout << ans << '\n';
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
