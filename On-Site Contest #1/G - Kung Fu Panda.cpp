#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int y = 0, x = 0;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'U') y++;
            if (s[i] == 'R') x++;
            if (s[i] == 'L') x--;
            if (s[i] == 'D') y--;
            if (y == 1 && x == 1) {
                flag = true;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
}
