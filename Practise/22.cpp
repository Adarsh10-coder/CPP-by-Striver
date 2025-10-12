// https://codeforces.com/problemset/problem/2139/B
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        // input taken

        if(a==b){
            cout<<0<<endl;
        }
        else if(a%b==0 || b%a==0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }    
    }
    return 0;
}
