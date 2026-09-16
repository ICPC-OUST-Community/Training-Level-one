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
        for (int i = 0; i < n; i++) cin >> arr[i];
        int ans=0, c=0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) c++;
            else c=0;
            ans = max(ans,c);
        }
        cout << ans << endl;
    }
}
