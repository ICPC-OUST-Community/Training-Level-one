#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    int n; cin >> n;
    int freq[n * 2 + 1]{}, c = 0, ans = 0;
    for (int i = 0; i < n * 2; i++) {
        int x; cin >> x;
        freq[x]++;
        if (freq[x] == 1) c++;
        else c--;
        ans = max(ans, c);
    }
    cout << ans << endl;
}

// ABADY
