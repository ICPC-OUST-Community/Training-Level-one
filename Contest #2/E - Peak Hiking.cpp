#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        int c = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            if (c == -1) {
                c = 0;
                continue;
            }
            if (!arr[i]) c++;
            else c = 0;
            if (c == k) {
                ans++;
                c = -1;
            }
        }
        cout << ans << endl;
    }
}

// ABADY
