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
        
        if(a<b){
            ll diff = b-a;
            if(diff%2!=0){
                cout<< 1 <<endl;
            }
            else{
                cout<< 2 <<endl;
            }
        }
        else if(a>b){
            ll diff = a-b;
            if(diff%2==0){
                cout<< 1 <<endl;
            }
            else{
                cout<< 2 <<endl;
            }
        }
        else{
            cout<<0<<endl;
        }
        
    }
    return 0;
}
