#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    string n, m; cin >> n >> m;
    int freq1[30]{}, freq2[30]{};
    for (int i=0;i<n.size();i++) freq1[n[i] - 'a']++;
    for (int i=0;i<m.size();i++) freq2[m[i] - 'a']++;
    int ans=0;
    for (char c='a';c<='z';c++) {
        if (freq2[c - 'a'] && !freq1[c - 'a']) {
            ans = -1;
            break;
        }
        ans += min(freq1[c - 'a'], freq2[c - 'a']);
    }
    cout << ans << endl;
}

// ABADY
