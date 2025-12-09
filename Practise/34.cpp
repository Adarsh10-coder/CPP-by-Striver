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

        set<int> s;
        for(int i=0; i<n; i++){
            s.insert(a[i]);
        }
        ll cnt = s.size();
        sort(a.begin(), a.end());
        for(int i=0; i<n; i++){
            if(a[i]>=cnt){
                cout<< a[i]<<endl;
                break;
            } 
        }
       
    }
    return 0;
}
