#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

bool checkBit(long long n, int i) {
    return (n >> i) & 1LL;
}

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        int x = 0;
        for (int i = 0; i < 32; i++) {
            if (checkBit(a, i) && checkBit(b, i)) {
                x |= (1LL << i);
            }
        }
        cout << (a ^ x) + (b ^ x) << '\n';
    }
}
