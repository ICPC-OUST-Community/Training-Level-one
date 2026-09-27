#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int a,b,c; cin >> a >> b >> c;
        if (a + b == c) cout << '+' << endl;
        else cout << '-' << endl;
    }
}

// ABADY
