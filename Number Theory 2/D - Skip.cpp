#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int n, x; cin >> n >> x;
    int g = 0;
    for (int i=0;i<n;i++) {
        int a; cin >> a;
        int dif = abs(x - a);
        g = gcd(g, dif);
    }
    cout << g << endl;
}

// ABADY
