#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        int grid[n][m], freq[101]{};
        int mx = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
                mx = max(mx, grid[i][j]);
                freq[grid[i][j]]++;
            }
        }
      
        int freqRows[n]{}, freqCols[m]{};
      
        // Count the max number in each row
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == mx) cnt++;
            }
            freqRows[i] = cnt;
        }
      
        // Count the max number in each column
        for (int i = 0; i < m; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (grid[j][i] == mx) cnt++;
            }
            freqCols[i] = cnt;
        }
      
        bool flag = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (( freqRows[i] + freqCols[j] - (grid[i][j] == mx) ) == freq[mx]) flag = true;
            }
        }
        cout << (flag ? --mx : mx) << endl;
    }
}

// ABADY
