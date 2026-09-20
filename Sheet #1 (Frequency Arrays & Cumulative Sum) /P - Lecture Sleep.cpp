#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    int n, k; cin >> n >> k;
    int arr[n], t[n]{};
    for (int i=0;i<n;i++) cin >> arr[i];
    for (int i=0;i<n;i++) {
        bool x; cin >> x;
        if (x) t[i] = arr[i];
    }
    for (int i=1;i<n;i++) {
        arr[i] += arr[i-1];
        t[i] += t[i-1];
    }
    int ans = 0;
    for (int i=0;i<n-k+1;i++) {
        int Delete = t[i+k-1] - (i ? t[i-1]:0);
        int Add = arr[i+k-1] - (i ? arr[i-1]:0);
        int k = t[n-1] - Delete + Add;
        ans = max(ans, k);
    }
    cout << ans << endl;
}

// ABADY
