#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    string s; cin >> s;
    bool freq[30]{};
    int cnt=0;
    for (int i=0;i<s.size();i++) {
        if (!freq[s[i]-'a']) cnt++;
        freq[s[i]-'a'] = true;
    }
    cout << ((cnt % 2) ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;
}

// ABADY
