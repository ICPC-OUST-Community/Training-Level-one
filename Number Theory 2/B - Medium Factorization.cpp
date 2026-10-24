#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

const int N = 1e7+7;
vector<int> spf(N);
void SPF() {
    bool isPrime[N]{};
    for (int i=1;i<N;i++) spf[i] = i;
    for (long long i=2;i*i<N;i++) {
        if (!isPrime[i]) {
            for (long long j = i*i; j<N; j+=i) {
                isPrime[j] = true;
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}

int main() {
    fast;

    SPF();
    int n;
    while (cin >> n) {
        vector<int> primeFactors;
        primeFactors.push_back(1);
        while (n>1) {
            int p = spf[n];
            primeFactors.push_back(p);
            n /= p;
        }
        for (int i=0;i<primeFactors.size();i++) {
            cout << primeFactors[i];
            if (i < primeFactors.size()-1) {
                cout << " x ";
            }
        }
        cout << '\n';
    }
}

// ABADY
