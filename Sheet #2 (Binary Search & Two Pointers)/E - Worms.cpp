#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i) arr[i] += arr[i-1];
    }
    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int q; cin >> q;
        int l=0, r = n-1, ans = 0;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (arr[mid] >= q) {
                ans = mid + 1;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        cout << ans << endl;
    }
}
