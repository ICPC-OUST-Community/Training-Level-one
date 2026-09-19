#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    int n; cin >> n;
    string s; cin >> s;
    int A=0, B=0;
    for (int i=0;i<n;i++) {
        if (s[i] == 'A') A++;
        else B++;
    }
    if (A > B) cout << "Anton" << endl;
    else if (B > A) cout << "Danik" << endl;
    else cout << "Friendship" << endl;
}

// ABADY
