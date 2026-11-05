#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

vector<long long> PrimeFac(long long n) {
    vector<long long> res;
    for (long long i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            res.push_back(i);
            n /= i;
        }
    }
    if (n > 1) res.push_back(n);
    return res;
}

int main() {
    fast;

    long long n; cin >> n;
    vector<long long> PF = PrimeFac(n);
    if (PF.size() <= 1) cout << 1 << '\n' << 0 << '\n';
    else if (PF.size() == 2) cout << 2 << '\n';
    else cout << 1 << '\n' << PF[0]*PF[1] << '\n';
}

// Abady
