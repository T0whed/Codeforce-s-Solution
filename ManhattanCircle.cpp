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
    int n, m; cin >> n >> m;
    char c[n][m]; int cnt  = 0, x, y; set<int>s, st;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> c[i][j];
            if (c[i][j] == '#') {x = i; y = j; s.insert(i); ++cnt;}
        }
    }
    if (cnt == 1) {cout << ++x << ' ' << ++y << "\n"; return;}
    std::vector<int> v(s.begin(), s.end()), vc;
    int ind = v.size() / 2;

    cout << ++v[ind] << ' ';
    //cout << ind << endl;
    ind = --v[ind];
    //cout << ind << endl;
    for (int j = 0; j < m; ++j) {
        //cout << c[ind][j] << endl;
        if (c[ind][j] == '#')vc.push_back(j);
    }
    //cout << vc.size() << endl;
    for (int i = 0; i < vc.size(); ++i) {
        //cout << vc[i] << endl;
        if (i == vc.size() / 2) {cout << ++vc[i] << '\n'; return;}
    }
    //cout << endl;;
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
