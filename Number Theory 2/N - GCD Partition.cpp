#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define int long long
using namespace std;

signed main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        vector<int> freq(n), suff(n);
        for (int i = 0; i < n; i++) {
            if (!i) freq[i] = arr[i];
            else freq[i] = freq[i - 1] + arr[i];
        }
        for (int i = n - 1; i >= 0; i--) {
            if (i == n - 1) suff[i] = arr[i];
            else suff[i] = suff[i + 1] + arr[i];
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, gcd(freq[i], suff[i + 1]));
        }
        cout << ans << endl;
    }
}

// ABADY
