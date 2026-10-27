#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define int long long
using namespace std;
const int N = 2e5 + 5;
int d[N], freq[N];

void sieve() {
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j += i) {
            d[i] += freq[j];
        }
    }
}

signed main() {
    fast;

    int n; cin >> n;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        freq[x]++;
        mx = max(mx, x);
    }
    sieve();
    vector<int> ans(n+1);
    for (int i = 1; i <= n; i++) {
        while (d[mx] < i && mx >= 1) mx--;
        ans[i] = mx;
    }
    for (int i=1; i<=n; i++) cout << ans[i] << ' ';
}

// ABADY
