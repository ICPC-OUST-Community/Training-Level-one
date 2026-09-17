// =============
//     ABADY
// =============

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        for (int i=0;i<n;i++) cin >> arr[i];
        vector<int> v6, v2, v3, v;
        for (int i=0;i<n;i++){
            if (arr[i] % 6 == 0) v6.push_back(arr[i]);
            else if (arr[i] % 2 == 0) v2.push_back(arr[i]);
            else if (arr[i] % 3 == 0) v3.push_back(arr[i]);
            else v.push_back(arr[i]);
        }
        for (auto I:v6) cout << I << ' ';
        for (auto I:v2) cout << I << ' ';
        for (auto I:v)  cout << I << ' ';
        for (auto I:v3) cout << I << ' ';
        cout << endl;
    }
}
