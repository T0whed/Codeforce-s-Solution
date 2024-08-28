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

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    map<char, int>mp;
    for (auto it : s)mp[it]++;

    vector<pair<char, int>> p(mp.begin(), mp.end());
    sort(p.begin(), p.end(), [](const pair<char, int>& a, const pair<char, int>&b) {
        return a.second > b.second;
    });

    string str(n, '\0'); int ind = 0;
    for (auto it : p) {
        while (it.second-- > 0) {
            if (ind >= n)ind = 1;
            str[ind] = it.first;
            ind += 2;
        }
    }
    cout << str << '\n';
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
