#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        // input taken

        ll a = n/2;
        ll b = n/4;
        if(n%2==0){
            cout<< b+1 <<endl;
        }
        else{
            cout<< 0 <<endl;
        }
    }
    return 0;
}
