#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int n, k; cin >> n >> k;
    long long arr[n];
    long long mn = 1e10;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mn = min(mn, arr[i]);
    }

    bool flag = false;
    long long ans=0;
    for (int i = 0; i < n; i++) {
        long long dif = arr[i] - mn;
        if (dif % k) {
            flag = true;
            break;
        }
        ans += (dif / k);
    }
    cout << (flag ? -1 : ans) << '\n';
}

// ABADY
