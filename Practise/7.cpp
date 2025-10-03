// https://codeforces.com/problemset/problem/2123/B


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, j, k;
        cin >> n >> j >> k;
        vector<ll> a(n);
        ll maxi = 0;
        for (int i=0; i<n; i++){
            cin >> a[i];
            maxi = max(maxi, a[i]);
        }
        // input taken

        if( k>1){
            cout<< "YES" <<endl;
        }
        else if (k == 1 && (a[j-1] == maxi)){
           cout<< "YES" <<endl;
        }
        else{
            cout<< "NO" <<endl;
        }
    }
    return 0;
}