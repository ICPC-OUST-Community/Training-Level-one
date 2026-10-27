#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define int long long
using namespace std;

signed main() {
    fast;

    int n, m; cin >> n >> m;
    int a[n], b[n];
    int g = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for (int i = 1; i < n; i++) g = gcd(g, a[i] - a[0]);
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        cout << gcd(g, a[0] + x) << ' ';
    }
    cout << '\n';
}

// ABADY
