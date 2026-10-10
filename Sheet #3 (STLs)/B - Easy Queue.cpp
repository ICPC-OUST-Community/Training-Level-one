#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int q; cin >> q;
    queue<int> qu;
    while (q--) {
        int op; cin >> op;
        if (op == 1) {
            int n; cin >> n;
            qu.push(n);
        }
        else if (op == 2) {
            if (!qu.empty()) qu.pop();
        }
        else {
            if (qu.empty()) cout << "Empty!" << '\n';
            else cout << qu.front() << '\n';
        }
    }
}
