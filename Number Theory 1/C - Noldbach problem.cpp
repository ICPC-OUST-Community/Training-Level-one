#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

vector<int> sieve(int n) {
    bool isPrime[n+2]{};
    vector<int> ans;
    isPrime[0] = isPrime[1] = true;
    for (long long i=2; i*i<=n; i++) {
        if (!isPrime[i]) {
            for (long long j=i*i; j<=n; j+=i) {
                isPrime[j] = true;
            }
        }
    }
    for (long long i=2; i<=n; i++) {
        if (!isPrime[i]) ans.push_back(i);
    }
    return ans;
}

bool isPrime(int n) {
    if (n==1) return false;
    for (int i=2;i*i<=n;i++) {
        if (n%i==0) return false;
    }
    return true;
}

int main() {
    fast;

    int n, k; cin >> n >> k;
    vector<int> v = sieve(n);
    int cnt = 0;
    for (int i=0;i<v.size()-1;i++) {
        if (v[i] + v[i+1] + 1 > n) break;
        if (isPrime(v[i] + v[i+1] + 1)) cnt++;
    }
    cout << (cnt >= k ? "YES":"NO") << '\n';
}

// Abady
