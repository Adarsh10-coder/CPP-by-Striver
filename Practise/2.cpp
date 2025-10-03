// https://codeforces.com/problemset/problem/2128/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n, c;
        cin >> n >> c;
        vector<ll> a(n);
        for (ll i=0; i<n; i++) cin >> a[i];
        // input taken

        sort(a.rbegin(), a.rend());
        int saved = 0;
        for (ll i=0; i<n; i++) {
            if (a[i]*(1LL << saved) <= c) {
                saved++;
            }
        }
        cout << n - saved << endl;
    }
}

