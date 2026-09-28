#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        long long k, x; cin >> k >> x;
        while (k--) {
            x *= 2;
        }
        cout << x << endl;
    }
}

// ABADY
