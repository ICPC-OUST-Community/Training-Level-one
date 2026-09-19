#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    int n; cin >> n;
    int arr[n];
    for (int i=0;i<n;i++) cin >> arr[i];
    int pre[n]{}, suf[n]{};
    pre[0] = arr[0];
    for (int i=1;i<n;i++) {
        pre[i] = pre[i-1] + arr[i];
    }
    suf[n-1] = arr[n-1];
    for (int i=n-2;i>=0;i--) {
        suf[i] = suf[i+1] + arr[i];
    }
    int ans=0;
    for (int i=0;i<n-1;i++) {
        if (pre[i] == suf[i+1]) ans++;
    }
    cout << ans << endl;
}

// ABADY
