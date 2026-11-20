#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, q; cin >> n >> q;
        map<string, int> freq1;
        map<int, string> freq2;
        vector<int> v;
        for (int i=0;i<n;i++) {
            string s; cin >> s;
            int x; cin >> x;
            freq1[s] = x;
            freq2[x] = s;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        while (q--) {
            string s; cin >> s;
            int num = freq1[s];
            int j = upper_bound(v.begin(),v.end(),num) - v.begin();
            if (j == n) {
                cout << "No More Chapters" << endl;
            }
            else {
                cout << freq2[v[j]] << endl;
            }
        }
    }
}
