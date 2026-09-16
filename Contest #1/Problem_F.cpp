// =============
//     ABADY
// =============

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        int zeros=0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (!arr[i]) zeros++;
        }
        if (zeros < 2) cout << -1 << endl;
        else cout << arr[0] + arr[n-1] << endl;
    }
}
