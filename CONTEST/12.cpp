#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        // input taken
        
        bool check = true;
        sort(a.begin(), a.end());
        for(int i=1; i<n; i++){
            if(i%2==0 && a[i]!=a[i-1]){
                check = false;
                break;
            }
        }
        if(check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}