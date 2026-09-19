#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    int n; cin >> n;
    int freq[101]{}, mxFreq = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        freq[x]++;
        mxFreq = max(mxFreq, freq[x]);
    }
    cout << n - mxFreq << endl;
}

// ABADY
