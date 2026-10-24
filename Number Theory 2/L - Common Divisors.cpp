#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define int long long
using namespace std;

int NumberDivisiors(int n) {
    int ret = 0;
    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            ret += 2;
            if (i*i == n) ret--;
        }
    }
    return ret;
}

signed main() {
    fast;

    int n; cin >> n;
    int g = 0;
    for (int i=0;i<n;i++) {
        int a; cin >> a;
        g = gcd(g, a);
    }
    cout << NumberDivisiors(g) << endl;
}

// ABADY
