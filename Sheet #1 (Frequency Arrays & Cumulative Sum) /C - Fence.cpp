#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    int n,k; cin >> n >> k;
    int arr[n];
    for (int i=0;i<n;i++) cin >> arr[i];
    for (int i=1;i<n;i++) arr[i] += arr[i-1];
    int ans = 1e9, idx;
    for (int i=0;i<n-k+1;i++) {
        int x = arr[i+k-1] - (i ? arr[i-1]:0);
        if (x < ans) {
            ans = x;
            idx = i+1;
        }
    }
    cout << idx << endl;
}

// ABADY
