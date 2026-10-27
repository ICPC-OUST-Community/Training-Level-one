#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;
const int N = 4e4+4;
vector<int> primes;
void sieve() {
    bool isPrime[N]{};
    isPrime[0] = isPrime[1] = true;
    for (int i=0;i<N;i++) {
        if (!isPrime[i]) {
            primes.push_back(i);
            for (int j=i*i;j<N;j+=i) {
                isPrime[j] = true;
            }
        }
    }
}
signed main() {
    fast;

    sieve();
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        for (int i=0;i<n;i++) cin >> arr[i];

        map<int,int> freq;
        for (int i=0;i<n;i++) {
            for (auto &I:primes) {
                if ((arr[i] % I) == 0) {
                    freq[I]++;
                    while ((arr[i] % I) == 0) arr[i] /= I;
                }
            }
            if (arr[i] > 1) freq[arr[i]]++;
        }

        bool flag = false;
        for (auto [a, b]:freq) {
            if (b > 1) {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
}

// ABADY
