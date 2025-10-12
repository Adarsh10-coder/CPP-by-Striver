// https://codeforces.com/problemset/problem/2139/B
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        // input taken

        sort(a.rbegin(), a.rend());
        ll sum1 = 0;
        ll sum2 = 0;        
        if(m>n){
            for(int i=0; i<n; i++){
                sum1 += a[i]*(m-i);
            }
            cout<<sum1<<endl;
        }
        else{
            for(int i=0; i<m; i++){
                sum2 += a[i]*(m-i);
            }
            cout<< sum2 <<endl;
        }

        
    }
    return 0;
}
