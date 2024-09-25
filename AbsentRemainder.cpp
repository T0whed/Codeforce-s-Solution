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
    map<int, int> mp;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i]; mp[arr[i]]++;
    }

    sort(arr, arr + n);

    int i = 0, j = 0, cnt = 0; bool done = false;
    while (i < n) {
        j = i + 1;
        while (j < n) {
            if (mp[arr[j] % arr[i]] == 0) {
                cout << arr[j] << ' ' << arr[i] << '\n';
                cnt++;
                if (cnt == n / 2) {done = true; break;}
            }
            ++j;
        }
        if (done)break;
        ++i;
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
