#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int g, l; cin >> g >> l;
        if (l % g == 0) cout << g << ' ' << l << endl;
        else cout << -1 << endl;
    }
}

// ABADY
