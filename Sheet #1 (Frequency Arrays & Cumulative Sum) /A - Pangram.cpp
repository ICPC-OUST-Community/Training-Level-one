#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    int n; cin >> n;
    string s; cin >> s;
    bool freq[200]{};
    for (int i = 0; i < n; i++) {
        freq[s[i]] = true;
    }
    bool flag = false;
    for (char c = 'a'; c <= 'z'; c++) {
        if (freq[c] == false && freq[c-32] == false) flag = true;
    }
    if (flag) cout << "NO" << endl;
    else cout << "YES" << endl;
}

// ABADY
