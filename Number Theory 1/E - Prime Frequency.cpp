#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    fast;

    int t; cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        string s; cin >> s;
        int freq[200]{};
        for (int i = 0; i < s.size(); i++) {
            freq[(int)s[i]]++;
        }
        string ans;
        for (int i=0;i<200;i++) {
            if (isPrime(freq[i])) ans.push_back((char)i);
        }
        if (ans.empty()) cout << "Case " << tc << ": " << "empty\n";
        else cout << "Case " << tc << ": " << ans << '\n';
    }
}

// Abady
