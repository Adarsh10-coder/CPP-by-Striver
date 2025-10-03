// https://codeforces.com/problemset/problem/2127/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];
        // input taken

        set<int> s(a.begin(), a.end());
        s.erase(-1);
        if (s.size()<=1 && !s.count(0)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
