#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

bool isPrime(long long n) {
    if (n <= 1) return false;
    for (long long i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    fast;

    map<long long, long long> mp;
    for (long long i=2;i<=1e6;i++) mp[i*i] = i;
    int n; cin >> n;
    for (int i=0;i<n;i++) {
        long long x; cin >> x;
        if (isPrime(mp[x])) cout << "YES\n";
        else cout << "NO\n";
    }
}

// Abady
