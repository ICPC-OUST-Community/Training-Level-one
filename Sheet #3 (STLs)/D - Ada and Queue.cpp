#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int q; cin >> q;
    
    deque<int> dq;
    bool rev = false;
    while (q--) {
        string s; cin >> s;

        if (s == "reverse") {
            rev = !rev;
        }
        else if (s == "push_back") {
            int n; cin >> n;
            
            if (!rev) dq.push_back(n);
            else dq.push_front(n);
        }
        else if (s == "toFront") {
            int n; cin >> n;
            
            if (!rev) dq.push_front(n);
            else dq.push_back(n);
        }
        else if (s == "front" || s == "back") {
            if (dq.empty()) {
                cout << "No job for Ada?" << '\n';
                continue;
            }

            if (s == "front") {
                if (!rev) {
                    cout << dq.front() << '\n';
                    dq.pop_front();
                }
                else {
                    cout << dq.back() << '\n';
                    dq.pop_back();
                }
            }
            else {
                if (!rev) {
                    cout << dq.back() << '\n';
                    dq.pop_back();
                }
                else {
                    cout << dq.front() << '\n';
                    dq.pop_front();
                }
            }
        }
    }

}

// Abady
