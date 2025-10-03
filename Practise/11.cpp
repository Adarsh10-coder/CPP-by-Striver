#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        // input taken

        ll neg_cnt = 0;
        ll zero_cnt = 0;
        for(int i=0; i<n; i++){
            if(a[i]<0){
                neg_cnt++;
            }
            else if(a[i]==0){
                zero_cnt++;
            }
        }
        if(neg_cnt%2 == 0){
            cout<<zero_cnt<<endl;
        }
        else{
            cout<<2+zero_cnt<<endl;
        }
    }
    return 0;
}
