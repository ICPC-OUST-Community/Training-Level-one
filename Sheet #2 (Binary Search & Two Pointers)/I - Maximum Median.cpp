#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    long long n, k; cin >> n >> k;
    long long arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    long long l = arr[n/2], r = 1e10, ans = arr[n/2];
    while (l <= r) {
        long long mid = (l + r) / 2;
        long long need = 0;
        for (int i = n/2; i < n; i++) {
            if (arr[i] < mid) {
                need += (mid - arr[i]);
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
