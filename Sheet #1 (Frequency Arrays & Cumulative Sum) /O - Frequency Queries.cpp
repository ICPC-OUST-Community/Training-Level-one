#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    int q; cin >> q;
    map<int,int> freq, freqOFfreq;
    while (q--) {
        int type, n; cin >> type >> n;
        if (type == 1) {
            freqOFfreq[freq[n]]--;
            freq[n]++;
            freqOFfreq[freq[n]]++;
        }
        else if (type == 2) {
            if (freq[n]) {
                freqOFfreq[freq[n]]--;
                freq[n]--;
                freqOFfreq[freq[n]]++;
            }
        }
        else {
            cout << (freqOFfreq[n] > 0) << endl;
        }
    }
}

// ABADY
