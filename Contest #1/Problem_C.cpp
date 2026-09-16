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
        bool vis[n]{};
        for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i = 0; i < n; i++) {
            if (arr[i] % 6 == 0) {
                vis[i] = 1;
                cout << arr[i] << ' ';
            }
        }
        for (int i = 0; i < n; i++) {
            if (vis[i]) continue;
            if (arr[i] % 2 == 0) {
                vis[i] = 1;
                cout << arr[i] << ' ';
            }
        }
        for (int i = 0; i < n; i++) {
            if (vis[i]) continue;
            if ((arr[i] % 6 != 0) && (arr[i] % 3 != 0) && (arr[i] % 2 != 0)) {
                vis[i] = 1;
                cout << arr[i] << ' ';
            }
        }
        for (int i = 0; i < n; i++) {
            if (vis[i]) continue;
            if (arr[i] % 3 == 0) {
                vis[i] = 1;
                cout << arr[i] << ' ';
            }
        }
        cout << endl;
    }
}
