#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    int n, m; cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < m; i++) {
        int m; cin >> m;
        int l = 0, r = n - 1, ans = 0;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (arr[mid] <= m) {
                ans = mid + 1;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        cout << ans << ' ';
    }
}
