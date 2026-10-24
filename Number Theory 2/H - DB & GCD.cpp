#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int g = 0;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            g = __gcd(g, a);
        }
        cout << ((g == 1) ? n : -1) << '\n';
    }
}

// ABADY
