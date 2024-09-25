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
    string s; cin >> s;

    int ind = -1;
    for (int i = 0; i < s.size() - 1; ++i) {
        if (s[i] == s[i + 1]) {ind = i + 1; break;}
    }
    if (ind == -1) {
        if (s.back() != 'z') {
            s.push_back('z');
        }
        else s.push_back('a');
        cout << s << '\n';
        return;
    }
    string str(s.begin(), s.begin() + ind);
    // cout << str << '\n';

    if (str.back() != 'z') str.push_back('z');
    else str.push_back('a');

    cout << str;
    if (ind == s.size()) {cout << '\n'; return;}
    for (int i = ind; i < s.size(); ++i)cout << s[i];
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
