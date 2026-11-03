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
        int ans = 0;
        for (int i = 30; i >= 0; i--) {
            int on = 0, fake_k = k;
            for (int j = 0; j < n; j++) {
                if ((arr[j] >> i) & 1) on++;
                else if (fake_k) {
                    on++;
                    fake_k--;
                }
            }
            if (on == n) {
                ans += (1 << i);
                k = fake_k;
            }
        }
        cout << ans << endl;
    }
}
