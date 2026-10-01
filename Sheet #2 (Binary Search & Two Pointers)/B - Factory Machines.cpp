#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
#define ull unsigned long long
using namespace std;

int main() {
    fast;

    int n, t; cin >> n >> t;
    ull arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    ull l = 0, r = 1e20, ans=0;
    while (l <= r) {
        ull mid = (l + r) / 2;
        ull sum = 0;
        for (int i=0; i<n; i++) {
            sum += (mid / arr[i]);
        }
        if (sum >= t) {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans << endl;
}
