// https://codeforces.com/problemset/problem/2144/A
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        // input taken

        ll sum = 0;
        for(int i=0; i<n; i++){
            sum += a[i];
        }
        if(sum%3 == 0){
            cout<<1<<" "<<2<<endl;
        }
        else{
            cout<<0<<" "<<0<<endl;
        }
    }
    return 0;
}
