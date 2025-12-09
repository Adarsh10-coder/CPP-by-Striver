#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        string s;
        cin >> n >> s;
        // input taken

        ll m = 0;
        char last = s[n - 1];
        for (ll i=0; i<n-1; i++) {
            if (s[i] != last){
                m++;
            }
        }
        cout << m << '\n';
    }
    return 0;
}