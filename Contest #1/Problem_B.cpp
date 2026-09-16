// =============
//     ABADY
// =============

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long prefix = 0, mx = 0, ans=0;
        for (int i=0;i<n;i++) {
            long long x; cin >> x;
            prefix += x;
            mx = max(mx,x);
            if (prefix - mx == mx) ans++;
        }
        cout << ans << endl;
    }
}
