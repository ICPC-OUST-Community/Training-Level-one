#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl '\n'
using namespace std;

int main() {
    fast;

    string str; cin >> str;
    long long b=0,s=0,c=0;
    for (int i=0;i<str.size();i++){
        if (str[i]=='B') b++;
        if (str[i]=='S') s++;
        if (str[i]=='C') c++;
    }
    long long xb,xs,xc; cin >> xb >> xs >> xc;
    long long yb,ys,yc; cin >> yb >> ys >> yc;
    long long p; cin >> p;
    long long l=0, r=1e15, ans=0;;
    while(l<=r){
        long long mid=(l+r)/2;
        long long n1=mid*b, n2=mid*s ,n3=mid*c;
        long long sum=0;
        if (n1>xb) sum += (n1-xb)*yb;
        if (n2>xs) sum += (n2-xs)*ys;
        if (n3>xc) sum += (n3-xc)*yc;

        if (sum <= p){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout << ans;
}
