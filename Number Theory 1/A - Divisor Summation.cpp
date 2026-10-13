#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

const int N = 5e5+5;
vector<int> ans(N,1);

int main() {
    fast;

    ans[1] = 0;
    for (int i=2;i<N;i++) {
        for (int j = i * 2; j < N; j += i) {
            ans[j] += i;
        }
    }
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << ans[n] << endl;
    }
}

// Abady
