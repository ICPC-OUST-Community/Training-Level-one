#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n], freq[101]{};
        for (int i=0;i<n;i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        for (int i=0;i<n;i++) {
            if (freq[arr[i]] == 1) {
                cout << i+1 << endl;
                break;
            }
        }
    }
}

// ABADY
