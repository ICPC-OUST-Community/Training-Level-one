#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    int n; cin >> n;
    long long arr[n], fake[n];
    for (int i=0;i<n;i++) {
        cin >> arr[i];
        fake[i] = arr[i];
    }
    sort(fake, fake + n);
    for (int i=1;i<n;i++) {
        arr[i]  += arr[i-1];
        fake[i] += fake[i-1];
    }

    int q; cin >> q;
    while (q--) {
        int op, l, r; cin >> op >> l >> r;
        r--, l--;
        if (op == 1) cout << arr[r] - (l ? arr[l-1]:0) << endl;
        else cout << fake[r] - (l ? fake[l-1]:0) << endl;
    }
}

// ABADY
