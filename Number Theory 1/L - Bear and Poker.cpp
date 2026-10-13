#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int removeFactors(int x) {
    while (x % 2 == 0) x /= 2;
    while (x % 3 == 0) x /= 3;
    return x;
}

int main() {
    fast;

    int n; cin >> n;
    int x; cin >> x;
    int base = removeFactors(x);
    bool flag = true;
    for (int i=1;i<n;i++) {
        cin >> x;
        if (removeFactors(x) != base) flag = false;
    }
    cout << (flag ? "Yes":"No") << endl;
}

// Abady
