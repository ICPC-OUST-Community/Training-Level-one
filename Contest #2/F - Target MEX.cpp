#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int n, mex; cin >> n >> mex;
        int freq[n + 1]{};
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }
        int ans = 0;
        for (int i = 0; i < mex; i++) {
            if (!freq[i]) ans++;
        }
        ans = max(ans, freq[mex]);
        cout << ans << endl;
    }
}

// ABADY
