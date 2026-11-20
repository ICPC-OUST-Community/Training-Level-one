#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int pref[n+1]{}, suff[n+1]{};
    int c = 1, ans = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i-1]) c++;
        else c = 1;
        pref[i] = c;
        ans = max(ans, c);
    }
    c = 1;
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] < arr[i+1]) c++;
        else c = 1;
        suff[i] = c;
    }
    pref[0] = suff[n-1] = 1;
    for (int i=1;i<n-1;i++) {
        if (arr[i+1] > arr[i-1]) {
            ans = max(ans, pref[i-1] + suff[i+1]);
        }
    }
    cout << ans << endl;
}
