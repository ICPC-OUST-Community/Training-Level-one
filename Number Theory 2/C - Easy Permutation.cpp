#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for (int i = n; i >= 1; i--) {
            cout << i << ' ';
        }
        cout << endl;
    }
}

// ABADY
