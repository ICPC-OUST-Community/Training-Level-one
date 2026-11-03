#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    long long a, b; cin >> a >> b;
    long long x = 0;
    int ans = 0;
    for (int i=0;i<63;i++) {
        x |= (1LL<<i);
        for (int j=i-1;j>=0;j--) {
            long long k = x & ~(1LL<<j);
            if (k >= a && k <= b) ans++;
        }
    }
    cout << ans << endl;
}
