#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int n; cin >> n;
    vector<int> pos, neg, zero;
    for (int i=0;i<n;i++) {
        int x; cin >> x;
        if (x > 0) pos.push_back(x);
        else if (x < 0) neg.push_back(x);
        else zero.push_back(x);
    }

    if (pos.empty() && neg.size() > 2) {
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }

    if (neg.size() % 2 == 0) {
        zero.push_back(neg.back());
        neg.pop_back();
    }

    cout << neg.size() << ' ';
    for (auto I:neg) cout << I << ' ';
    cout << endl << pos.size() << ' ';
    for (auto I:pos) cout << I << ' ';
    cout << endl << zero.size() << ' ';
    for (auto I:zero) cout << I << ' ';
}

// Abady
