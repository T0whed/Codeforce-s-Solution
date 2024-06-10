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
    vector<int> v(n);
    for (auto &it : v)cin >> it;

    set<int>s(v.begin(), v.end());
    if (s.size() == 1) {cout << "NO\n"; return;}

    cout << "YES\n";

    //cout << *s.begin() << endl;
    vector<int>st(s.begin(), s.end());
    if (s.size() == 2) {
        int cnt = count(v.begin(), v.end(), st[0]);
        int cnt2 = count(v.begin(), v.end(), st[1]);

        //if(cnt == 1  cnt2 == 1){cout<< "NO\n"; return;}
        string str = "";
        if (cnt < cnt2) {
            for (int i = 0; i < n; ++i) {
                if (v[i] == st[0] or cnt2 == 1) {str += 'B'; if (cnt2 == 1)cnt2 = 0;}
                else {
                    str += 'R';
                    cnt2--;
                }
            }
        }
        else {
            for (int i = 0; i < n; ++i) {
                if (v[i] == st[1] or cnt == 1) {str += 'R'; if (cnt == 1)cnt = 0;}
                else {
                    str += 'B';
                    cnt--;
                }
            }
        }
        cout << str << '\n'; return;
    }
    string str = "";
    for (int i = 0; i < n; ++i) {
        if (v[i] == *s.begin())str.push_back('B');
        else str.push_back('R');
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
