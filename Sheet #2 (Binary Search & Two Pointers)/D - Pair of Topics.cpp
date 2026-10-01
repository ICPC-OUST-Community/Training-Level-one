#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

signed main() {
    fast;

    int n; cin >> n;
    long long a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    long long c[n]{};
    for (int i = 0; i < n; i++) c[i] = a[i] - b[i];
    sort(c, c + n);
    long long pairs=0;
    for (int i = 0; i < n; i++) {
        long long l = i+1, r = n - 1, ans= n;
        while (l <= r) {
            long long mid = (l + r) / 2;
            if (c[i] + c[mid] > 0) {
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        pairs += (n - ans);
    }
    cout << pairs << endl;
}
