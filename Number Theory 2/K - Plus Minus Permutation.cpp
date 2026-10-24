#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        long long common = n / lcm(x, y);
        long long cnt1 = n / x - common, cnt2 = n / y - common;
        long long neg = cnt2 * (cnt2 + 1) / 2;
        long long end = n - cnt1;
        long long pos = n * (n + 1) / 2 - end * (end + 1) / 2;
        cout << pos - neg << endl;
    }
}

// ABADY
