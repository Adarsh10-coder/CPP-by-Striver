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
        for(int i=0; i<n; i++)  cin>> a[i];
        // input taken

        ll flag = 0;
        for(int i=0; i+1<n; i++){
            if((a[i+1] % 2) != (a[i] % 2)){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            for(auto it : a){
                cout << it << " ";
            }
            cout << endl;
        }
        else{
            sort(a.begin(), a.end());
            for(auto ip : a){
                cout << ip << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
