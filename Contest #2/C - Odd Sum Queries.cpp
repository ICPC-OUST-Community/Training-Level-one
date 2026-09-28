#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int n, q; cin >> n >> q;
        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (i) arr[i] += arr[i - 1];
        }
        while (q--) {
            long long l, r, k;
            cin >> l >> r >> k;
            l--, r--;
            long long old = arr[r] - (l ? arr[l - 1] : 0);
            long long len = r - l + 1;
            long long newSum = (arr[n-1] - old) + (len * k);
            cout << ((newSum % 2) ? "YES" : "NO") << endl;
        }
    }
}

// ABADY
