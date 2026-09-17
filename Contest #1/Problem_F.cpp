// =============
//     ABADY
// =============

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
#define int long long
using namespace std;

const int N = 4e5+5;
int arr[N],n,last[N],dp[N];
int dpwkeda(int i) {
    if (i>=n) return 0;
    if (~dp[i]) return dp[i];
    int o1 = dpwkeda(i+1) + 1;
    int o2 = dpwkeda(last[arr[i]]) + ((last[arr[i]]-i)*(last[arr[i]]-i));
    return dp[i] = max(o1,o2);
}

signed main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        n *= 2;
        for (int i=0;i<=n;i++) {
            last[i] = 0;
            dp[i] = -1;
        }
        for (int i=0;i<n;i++) cin >> arr[i];
        for (int i=n-1;i>=0;i--) {
            if (!last[arr[i]]) {
                last[arr[i]] = i+1;
            }
        }
        cout << dpwkeda(0) << endl;
    }
}
