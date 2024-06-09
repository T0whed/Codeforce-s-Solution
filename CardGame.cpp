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
    char c; cin >> c;
    vector<pair<char, char>>p(2 * n), trump, C, D, H, S, remain;
    for (int i = 0; i < 2 * n; ++i) {
        char a, b; cin >> a >> b;
        p[i] = {a, b};
    }

    // for (auto it : p) {cout << it.first << it.second << ' ';} cout << endl;
    for (auto it : p) {
        if (it.second == 'H')H.push_back({it.first, it.second});
    }
    for (auto it : p) {
        if (it.second == 'D')D.push_back({it.first, it.second});
    }
    for (auto it : p) {
        if (it.second == 'C')C.push_back({it.first, it.second});
    }
    for (auto it : p) {
        if (it.second == 'S')S.push_back({it.first, it.second});
    }
    for (auto it : p) {
        if (it.second == c)trump.push_back({it.first, it.second});
    }
    sort(trump.begin(), trump.end()); sort(D.begin(), D.end());
    sort(S.begin(), S.end()); sort(H.begin(), H.end()); sort(C.begin(), C.end());

    // for (auto it : C) {cout << it.first << it.second << ' ';} cout << endl;
    // for (auto it : D) {cout << it.first << it.second << ' ';} cout << endl;
    // for (auto it : S) {cout << it.first << it.second << ' ';} cout << endl;
    // for (auto it : H) {cout << it.first << it.second << ' ';} cout << endl;

    int cnt = 0;
    if (c != 'C') {cnt += (C.size()) % 2; if (C.size() % 2) {remain.push_back(C.back()); C.pop_back();}}
    if (c != 'S') {cnt += (S.size()) % 2; if (S.size() % 2) {remain.push_back(S.back()); S.pop_back();}}
    if (c != 'D') {cnt += (D.size()) % 2; if (D.size() % 2) {remain.push_back(D.back()); D.pop_back();}}
    if (c != 'H') {cnt += (H.size()) % 2; if (H.size() % 2) {remain.push_back(H.back()); H.pop_back();}}
    //cout << cnt << '\n';

    int sz = trump.size();
    int rem = sz - cnt;
    if (rem % 2 != 0 or rem < 0) {cout << "IMPOSSIBLE\n"; return;}

    int g = 0;
    if (c != 'C') for (auto it : C) {
            cout << it.first << it.second << ' '; ++g;
            if (g == 2) {cout << "\n"; g = 0;}
        }
    if (c != 'D') for (auto it : D) {
            cout << it.first << it.second << ' '; ++g;
            if (g == 2) {cout << "\n"; g = 0;}
        }
    if (c != 'S') for (auto it : S) {
            cout << it.first << it.second << ' ';  ++g;
            if (g == 2) {cout << "\n"; g = 0;}
        }
    if (c != 'H') for (auto it : H) {
            cout << it.first << it.second << ' ';  ++g;
            if (g == 2) {cout << "\n"; g = 0;}
        }

    //for (auto it : remain) {cout << it.first << it.second << ' ';} cout << endl;
    while (remain.size()) {
        auto x = remain.back(); auto y = trump.back();
        cout << x.first << x.second << ' ' << y.first << y.second << "\n";
        remain.pop_back(); trump.pop_back();
    }
    if (trump.size()) {
        for (auto it : trump) {cout << it.first << it.second << ' ';} cout << endl;
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
