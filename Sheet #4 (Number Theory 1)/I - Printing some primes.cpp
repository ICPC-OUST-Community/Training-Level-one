#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

const int N = 1e8+8;
bool isPrime[N];
vector<int> ans;

void sieve() {
    isPrime[0] = isPrime[1] = true;
    for (long long i = 2; i*i < N; i++) {
        if (!isPrime[i]) {
            for (long long j = i*i; j < N; j += i) {
                isPrime[j] = true;
            }
        }
    }
    for (int i = 2; i < N; i++) {
        if (!isPrime[i]) ans.push_back(i);
    }
}

int main() {
    fast;

    sieve();
    for (int i=0;i<ans.size();i+=100) {
        cout << ans[i] << '\n';
    }
}

// Abady
