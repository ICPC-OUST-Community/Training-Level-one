#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n + 1);
        int even = 0, odd = 0;
        for (int i = 1; i <= n - 1; i++) {
            arr[i] = i;
            if (i & 1) odd ^= i;
            else even ^= i;
        }
        arr[n] = even ^ odd;
        arr[n] += (1 << 20);
        arr[n - 2] += (1 << 20);
        for (int i = 1; i <= n; i++) cout << arr[i] << ' ';
        cout << '\n';
    }
}
