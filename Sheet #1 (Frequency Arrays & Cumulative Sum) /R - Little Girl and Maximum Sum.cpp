#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    int n, q; cin >> n >> q;
    long long arr[n], par[n+1]{};
    for (int i=0;i<n;i++) cin >> arr[i];
    while (q--) {
        int l,r; cin >> l >> r;
        l--, r--;
        par[l]++;
        par[r+1]--;
    }
    for (int i=1;i<n;i++) par[i] += par[i-1];
    sort(arr,arr+n);
    reverse(arr,arr+n);
    sort(par,par+n);
    reverse(par,par+n);
    long long ans = 0;
    for (int i=0;i<n;i++) {
        ans += (arr[i] * par[i]);
    }
    cout << ans << endl;
}

// ABADY
