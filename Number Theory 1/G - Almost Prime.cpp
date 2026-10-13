#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int n; cin >> n;
    int Primes[n + 1]{};
    for (int i = 2; i <= n; i++) {
        if (!Primes[i]) {
            for (int m = i * 2; m <= n; m += i) {
                Primes[m]++;
            }
        }
    }
    int ans = 0;
    for (int i = 2; i <= n; i++) if (Primes[i] == 2) ans++;
    cout << ans << '\n';
}

// Abady
