#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int GetDivisors(int n) {
    int ans=0;
    for (long long i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            ans+=2;
            if (n / i == i) ans--;
        }
    }
    return ans;
}

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int l, r; cin >> l >> r;
        int ans = 0, j=0;
        for (int i = l; i <= r; i++) {
            int d = GetDivisors(i);
            if (d > ans) {
                ans = d;
                j = i;
            }
        }
        cout << "Between " << l << " and " << r << ", " << j << " has a maximum of " << ans << " divisors.\n";
    }
}

// Abady
