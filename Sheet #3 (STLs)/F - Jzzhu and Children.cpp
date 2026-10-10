#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int n, m; cin >> n >> m;
    queue<pair<int,int>> qu;
    for (int i=0;i<n;i++) {
        int x; cin >> x;
        qu.push({x, i+1});
    }

    while (qu.size() > 1) {
        pair<int,int> child = qu.front();
        qu.pop();
        child.first -= m;
        if (child.first > 0) qu.push(child);
    }

    cout << qu.front().second << endl;
}

// Abady
