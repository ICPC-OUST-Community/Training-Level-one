#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define int long long
using namespace std;

signed main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int x, y; cin >> x >> y;
        if ((y * y) <= x && (x % 2) == (y % 2)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

// ABADY
