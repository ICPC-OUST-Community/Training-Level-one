#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    int n, k; cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    if (k == n) cout << arr[n-1];
    else if (!k) {
        if (arr[0] <= 1) cout << -1 << endl;
        else cout << arr[0]-1 << endl;
    }
    else {
        if (arr[k] == arr[k-1]) cout << -1 << endl;
        else cout << arr[k]-1 << endl;
    }
}

// ABADY
