#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int n, l, r, x; cin >> n >> l >> r >> x;
    int arr[n];
    for (int i=0;i<n;i++) cin >> arr[i];
    int ans = 0;
    for (int i=0;i<(1LL<<n);i++) {
        int sum = 0, mn = INT_MAX, mx = INT_MIN;
        for (int j=0;j<n;j++) {
            if ((i>>j) & 1) {
                sum += arr[j];
                mn = min(mn, arr[j]);
                mx = max(mx,  arr[j]);
            }
        }
        if (sum >= l && sum <= r && mx - mn >= x) ans++;
    }
    cout << ans << '\n';
}
