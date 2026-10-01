#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
#define ull unsigned long long
using namespace std;

int main() {
    fast;

    long long l = -2e9, r = 2e9, mid;
    bool flag = false;
    int n; cin >> n;
    while (n--) {
        string s; cin >> s;
        int num; cin >> num;
        char c; cin >> c;
        if (c == 'N') {
            if (s == ">") s = "<=";
            else if (s == "<") s = ">=";
            else if (s == ">=") s = "<";
            else if (s == "<=") s = ">";
        }
        if (s == ">=") {
            if (num >= l) {
                l = num;
            }
        }
        else if (s == ">") {
            if (num >= l) l = num + 1;
        }
        else if (s == "<=") {
            if (num <= r) {
                r = num;
            }
        }
        else if (s == "<") {
            if (num <= r) r = num - 1;
        }
        if (l > r) flag = 1;
    }
    mid = (l + r) / 2;
    if (flag) cout << "Impossible" << endl;
    else cout << mid << endl;
}
