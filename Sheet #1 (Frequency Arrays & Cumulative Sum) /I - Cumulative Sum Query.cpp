#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    int n; cin >> n;
    long long arr[n];
    for (int i=0;i<n;i++) {
        cin >> arr[i];
        if (i) arr[i] += arr[i-1];
    }
    int q; cin >> q;
    while (q--) {
        int l,r; cin >> l >> r;
        cout << arr[r] - (l ? arr[l-1]: 0) << endl;
    }
}

// ABADY
