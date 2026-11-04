#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a = -1, b = 0;
        for (int i = 0; i < 31; i++) {
            if ((n >> i) & 1) {
                if (a == -1) a = (1 << i);
                else b += (1 << i);
            }
        }
        cout << a << ' ' << b << '\n';
    }
}
