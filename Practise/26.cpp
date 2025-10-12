// https://codeforces.com/problemset/problem/2133/A
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
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        // input taken

        vector<ll> freq(1000);
        for(int i=0; i<n; i++){
            freq[a[i]]++;
        }
        bool ok = false;
        for(int i=0; i<freq.size(); i++){
            if(freq[i] >= 2){
                ok = true;
                break;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
