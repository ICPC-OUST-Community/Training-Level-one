#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

struct SparceTable {
    vector<vector<int>> data;
    vector<int> logs;

    int marge(int& lf, int& ri) {
        return (lf & ri);
    }

    SparceTable(vector<int>& arr) {
        int n = arr.size();
        logs.assign(n + 1, 0);
        for (int i = 2; i <= n; i++) logs[i] = logs[i / 2] + 1;
        data.assign(logs[n] + 1, vector<int>(n));
        data[0] = arr;

        for (int i = 1; i <= logs[n]; i++) {
            int len = (1 << i);
            for (int j = 0; j + len <= n; j++) {
                data[i][j] = marge(data[i - 1][j], data[i - 1][j + (len >> 1)]);
            }
        }
    }

    int get(int l, int r) {
        int len = r - l + 1;
        int level = logs[len];
        return marge(data[level][l], data[level][r - (1 << level) + 1]);
    }
};

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        SparceTable st(arr);
        int q; cin >> q;
        while (q--) {
            int L,k; cin >> L >> k;
            L--;
            int l = L, r = n-1, ans = -1;
            while (l <= r) {
                int mid = (l+r)/2;
                if (st.get(L,mid) >= k) {
                    ans = mid + 1;
                    l = mid + 1;
                }
                else r = mid - 1;
            }
            cout << ans << ' ';
        }
        cout << endl;
    }
}
