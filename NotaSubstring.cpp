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
    string s; cin >> s;
    int n = s.size() * 2;

    string str = "", strr = "";
    while (str.size() < n / 2)str.push_back('(');
    while (str.size() < n)str.push_back(')');
    //cout << str << endl;
    while (strr.size() < n)strr += "()";
    //cout << strr << endl;

    if (!(str.find(s) != string::npos)) {cout << "YES\n" << str << '\n'; return;}
    if (!(strr.find(s) != string::npos)) {cout << "YES\n" << strr << '\n'; return;}

    cout << "NO\n";
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
