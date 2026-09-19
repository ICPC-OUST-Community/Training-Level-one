#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    string s; cin >> s;
    int n = s.size();
    int pre[n]{};
    for (int i=0;i<n-1;i++) {
        pre[i] = s[i] == s[i+1];
        if (i) pre[i] += pre[i-1];
    }
    int q; cin >> q;
    while (q--) {
        int l,r; cin >> l >> r;
        l--, r--;
        cout << (pre[r-1] - (l ? pre[l-1]:0)) << endl;
    }
}

// ABADY
