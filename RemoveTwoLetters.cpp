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
    string s; cin >> s;
    //set<string>st;
    map<string, int>mp;

    for (int i = 1; i < n - 1; ++i) {
        string str(s.begin(), s.begin() + i - 1);
        string strr (s.begin() + i + 1, s.end());
        string fstr = str + strr; mp[fstr]++;//st.insert(fstr);
        //cout << i << ' ' << fstr << '\n';
    }
    string str = s;
    str.pop_back(); str.pop_back(); mp[str]++;// st.insert(str);
    cout << mp.size() << '\n';
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

