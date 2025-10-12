#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll k, x;
        cin >> k >> x;
        // input taken

        ll ans = 0;
        for(int i=1; i<=k; i++){
            ans = x*pow(2,i);
        }
        cout<< ans <<endl; 
    }
    return 0;
}
