// https://codeforces.com/problemset/problem/2125/B


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t; 
    cin >> t;
    while(t--) {
        ll a, b, k;
        cin >> a >> b >> k;
        // input taken

        ll ans = __gcd(a,b);
        ll a1 = a/ans;
        ll b1 = b/ans;
        if(a1<=k && b1<=k){
            cout<< 1 <<endl;
        }
        else{
            cout<< 2 <<endl;
        }
    }
    return 0;
}
