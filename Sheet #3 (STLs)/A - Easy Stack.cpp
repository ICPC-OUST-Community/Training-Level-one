#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int q; cin >> q;
    stack<int> st;
    while (q--) {
        int op; cin >> op;
        if (op == 1) {
            int n; cin >> n;
            st.push(n);
        }
        else if (op == 2) {
            if (!st.empty()) st.pop();
        }
        else {
            if (st.empty()) cout << "Empty!" << '\n';
            else cout << st.top() << '\n';
        }
    }
}
