#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        // input taken

        if(l1+l2+l3 == b1 && l1+l2+l3==b2 && l1+l2+l3==b3){
            cout<<"YES"<<endl;
        }
        else if(b1+b2+b3 == l1 && b1+b2+b3==l2 && b1+b2+b3==l3){
            cout<<"YES"<<endl;
        }
        else if(l2+l3 == l1 && b2==b3 && b1+b2==l1){
            cout<<"YES"<<endl;
        }
        else if(b2+b3 == b1 && l2==l3 && l1+l2==b1){
            cout<<"YES"<<endl;
        } 
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
