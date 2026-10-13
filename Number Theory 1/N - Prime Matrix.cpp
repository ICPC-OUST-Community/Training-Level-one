#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

const int N = 1e6+6;
bool isPrime[N];
vector<int> v;
void sieve() {
    isPrime[0] = isPrime[1] = true;
    for (int i = 2; i*i < N; i++) {
        if (!isPrime[i]) {
            for (int m = i*i; m < N; m += i) {
                isPrime[m] = true;
            }
        }
    }
    for (int i = 2; i < N; i++) {
        if (!isPrime[i]) v.push_back(i);
    }
}

int main() {
    fast;

    sieve();
    int n,m; cin >> n >> m;
    int arr[n][m];
    for (int i=0;i<n;i++) for (int j=0;j<m;j++) cin >> arr[i][j];
    int ans = 1e9;
    for (int i=0;i<n;i++) {
        int c=0;
        for (int j=0;j<m;j++) {
            int k = *lower_bound(v.begin(),v.end(),arr[i][j]);
            c += min(ans, k-arr[i][j]);
        }
        ans = min(ans, c);
    }
    for (int i=0;i<m;i++) {
        int c=0;
        for (int j=0;j<n;j++) {
            int k = *lower_bound(v.begin(),v.end(),arr[j][i]);
            c += min(ans, k-arr[j][i]);
        }
        ans = min(ans, c);
    }
    cout << ans << endl;
}

// Abady
