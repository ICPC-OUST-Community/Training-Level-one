#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
using namespace std;
int n, m;
int grid[300][300];

int chek(int x, int y) {
    ll sum = 0;
    for (int i = x, j = y; i < n && j < m; i++, j++) {
        sum += grid[i][j];
    }
    for (int i = x - 1, j = y - 1; i >= 0 && j >= 0; i--, j--) {
        sum += grid[i][j];
    }
    for (int i = x + 1, j = y - 1; i < n && j >= 0; i++, j--) {
        sum += grid[i][j];
    }
    for (int i = x - 1, j = y + 1; i >= 0 && j < m; i--, j++) {
        sum += grid[i][j];
    }
    return sum;
}

int main() {
    fast;

    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int mx = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int m = chek(i, j);
                if (m > mx) mx = m;
            }
        }
        cout << mx << endl;
    }
}
