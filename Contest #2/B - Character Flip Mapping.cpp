#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        bool flag = true;
        for (char c = 'a'; c <= 'z'; c++) {
            bool flag_even = false, flag_odd = false;
            for (int i = 0; i < n; i++) {
                if (c == s[i]) {
                    if ((i + 1) % 2) flag_odd = true;
                    else flag_even = true;
                }
            }
            if (flag_even && flag_odd) flag = false;
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
}

// ABADY
