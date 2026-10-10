#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

int main() {
    fast;

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        stack<char> st;
        bool flag = true;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' or s[i] == '[' or s[i] == '{') st.push(s[i]);
            else {
                if (s[i] == ')' and !st.empty() and st.top() == '(') st.pop();
                else if (s[i] == ']' and !st.empty() and st.top() == '[') st.pop();
                else if (s[i] == '}' and !st.empty() and st.top() == '{') st.pop();
                else flag = false;
            }
        }
        cout << ((st.empty() && flag) ? "YES" : "NO") << '\n';
    }
}

// Abady
