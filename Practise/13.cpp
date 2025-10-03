// https://codeforces.com/problemset/problem/2149/C
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll cnt = 0;
        vector<ll> a(n);
        vector<ll> freq(k, 0);
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]==k){
                cnt++;
            }
            if(a[i] < k){
                freq[a[i]]++;
            }
        }
        // input taken

        ll ans = 0;
        for(int i = 0; i < k; i++){
            if(!freq[i]){ // it mean freq[i] = 0 ---> mean it is missing
                ans++;
            }
        }
        cout << max(ans, cnt) << endl;
    }
    return 0;
}
