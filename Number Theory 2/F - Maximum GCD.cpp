#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if (n & 1) {
            n--;
            cout << n/2 << endl;
        }
        else cout << n/2 << endl;
    }
}

// ABADY
