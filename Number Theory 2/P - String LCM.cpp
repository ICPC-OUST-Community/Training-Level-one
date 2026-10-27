#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

signed main() {
    fast;

    int t; cin >> t;
    while (t--) {
        string s,ss; cin >> s >> ss;
        int j = lcm(s.size(), ss.size());
        string ans;
        bool flag = false;
        for (int i=0;i<j;i++) {
            ans.push_back(s[i%s.size()]);
        }
        for (int i=0;i<j;i++) {
            if (ans[i]!=ss[i%ss.size()]) flag = true;
        }
        cout << (flag ? "-1":ans) << endl;
    }
}

// ABADY
