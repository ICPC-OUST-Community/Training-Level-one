#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int freq[n+1]{};
        for (int i=0;i<n;i++) {
            int x; cin >> x;
            if (i + x < n) freq[i + x]++;
            if (i - x >= 0 && x) freq[i - x]++;
        }
        int ans=0, cnt=0;
        for (int i=0;i<n;i++) {
            if (freq[i] >= n-1) {
                cnt++;
                ans = i+1;
            }
        }
        if (cnt == 1) cout << ans << '\n';
        else cout << -1 << '\n';
    }
}
