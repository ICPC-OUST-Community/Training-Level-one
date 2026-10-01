#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
#define ull unsigned long long
using namespace std;

int main() {
    fast;

    int n, k; cin >> n >> k;
    ull a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    ull l = 0, r = 1e20, ans=0;
    while (l <= r) {
        ull mid = (l + r) / 2;
        ull need = 0;
        for (int i=0;i<n;i++) {
            ull grams = mid * a[i];
            if (grams > b[i]) {
                need += (grams - b[i]);
            }
        }
        if (need <= k) {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << ans << endl;
}
