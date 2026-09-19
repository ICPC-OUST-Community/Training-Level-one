#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int freq[n+1]{};
        for (int i=0;i<n;i++) {
            int x; cin >> x;
            freq[x]++;
        }
        int ans = -1;
        for (int i=1;i<=n;i++) {
            if (freq[i] >= 3) ans = i;
        }
        cout << ans << endl;
    }
}

// ABADY
