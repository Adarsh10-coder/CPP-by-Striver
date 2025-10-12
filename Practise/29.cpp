#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        // input taken
        
        for (int i = 0; i < n; i++){
            if (a[i] == 1){
                for (int j = i; j < i+x; j++){
                    if (a[j] == 1){
                        a[j] = 0;
                    }
                }
                break;
            }
        }
        ll cnt = 0;
        for(int i=0; i<n; i++){
            if(a[i]==0){
                cnt++;
            }
        }
        if(cnt == n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
