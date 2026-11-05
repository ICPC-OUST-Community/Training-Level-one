#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;


int main() {
    fast;

    map<long long,bool> freq;
    long long x = 1;
    while (x <= 1e14) {
        freq[x] = true;
        x *= 2;
    }
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        cout << (freq[n] ? "NO":"YES") << '\n';
    }
}

// Abady
