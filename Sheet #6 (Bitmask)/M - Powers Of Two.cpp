#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int n, k; cin >> n >> k;
    priority_queue<int> pq;
    for (int i = 0; i < 31; i++) {
        if ((n >> i) & 1) pq.push(1 << i);
    }
    if (pq.size() > k) cout << "NO";
    else {
        while (pq.size() < k && pq.top() > 1) {
            int x = pq.top(); pq.pop();
            x /= 2;
            pq.push(x);
            pq.push(x);
        }
        if (pq.size() < k) cout << "NO";
        else {
            cout << "YES" << endl;
            while (pq.size()) {
                cout << pq.top() << ' ';
                pq.pop();
            }
        }
    }
}
