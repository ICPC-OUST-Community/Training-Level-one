#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int freq[n+1]{}, ans = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            freq[x]++;
            ans = max(ans, freq[x]);
        }
        cout << ans << endl;
    }
}

// ABADY
