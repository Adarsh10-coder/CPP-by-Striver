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
        set<int> s;
        for(int i=0; i<n; i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        // input taken

        vector<ll> freq(1000);
        for(int i=0; i<n; i++){
            freq[a[i]]++;
        }
        vector<ll> nonzero;
        for (ll f : freq) {
            if (f != 0) nonzero.push_back(f);
        }
        sort(nonzero.begin(), nonzero.end());
        ll sum = 0;
        ll maxi = 0;
        for (int i = 0; i < nonzero.size(); i++){
               sum = nonzero[i]*(nonzero.size()-i);
               maxi = max(maxi,sum);
        }
        cout<< maxi <<endl;
    }
    return 0;
}
