#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

const int N = 1e6+6;
vector<int> ans;
void sieve() {
    bool isPrime[N];
    isPrime[0] = isPrime[1] = 1;
    for (long long i=2; i*i<N; i++) {
        if (!isPrime[i]) {
            for (long long j=i*i; j<N; j+=i) {
                isPrime[j] = true;
            }
        }
    }
    for (long long i=2; i<N; i++) {
        if (!isPrime[i]) ans.push_back(i);
    }
}

int main() {
    fast;

    sieve();
    int t; cin >> t;
    while (t--) {
        int idx; cin >> idx;
        cout << ans[--idx] << '\n';
    }
}

// Abady
