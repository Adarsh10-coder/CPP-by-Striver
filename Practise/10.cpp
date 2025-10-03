#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> g(n);
        for(int i=0; i<n; i++) cin >> g[i];

        sort(g.begin(), g.end(), greater<ll>()); // sort descending
        if(n <= 2){
            cout << g[0] << endl;
        }
        else{
            if(n % 2 == 0){
                cout << g[0] + g[1] << endl;
            }
            else{
                cout << g[0] + g[1] + g[2] << endl;
            }
        }
    }
    return 0;
}
