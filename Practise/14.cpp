// https://codeforces.com/problemset/problem/2149/B
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

        sort(a.begin(), a.end());
        vector<pair<int,int>> vp;
        for(int i = 0; i < n; i += 2){
            vp.push_back({a[i], a[i+1]});
        }
        ll diff = 0;
        ll maxi = 0;
        for(int i=0; i<n/2; i++){
            diff = abs(vp[i].first - vp[i].second);
            maxi = max(maxi,diff);
        }
        cout<< maxi <<endl;
    }
    return 0;
}
