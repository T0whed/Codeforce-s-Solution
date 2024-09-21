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
    string str = "aeiou";

    int x = n / 5;
    int r = n % 5;

    for (int i = 0; i < x; ++i)cout << 'a';
    if (r) {cout << 'a'; --r;}
    for (int i = 0; i < x; ++i)cout << 'e';
    if (r) {cout << 'e'; --r;}
    for (int i = 0; i < x; ++i)cout << 'i';
    if (r) {cout << 'i'; --r;}
    for (int i = 0; i < x; ++i)cout << 'o';
    if (r) {cout << 'o'; --r;}
    for (int i = 0; i < x; ++i)cout << 'u';
    if (r)cout << 'u';
    cout << endl;

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
