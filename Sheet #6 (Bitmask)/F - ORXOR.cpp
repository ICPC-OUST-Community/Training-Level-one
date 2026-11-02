#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int n; cin >> n;
    int arr[n];
    for (int i=0;i<n;i++) cin >> arr[i];
    int ans = INT_MAX;
    for (int i=1;i<(1LL<<n);i++) {
        int o = 0, x = 0;
        for (int j=0;j<n;j++) {
            o |= arr[j];
            if ((i >> j) & 1) {
                x ^= o;
                o = 0;
            }
        }
        x ^= o;
        ans = min(ans, x);
    }
    cout << ans << '\n';
}
