// https://codeforces.com/problemset/problem/2143/A
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> p(n);
        for (ll i = 0; i < n; i++) cin >> p[i];
        // input taken

        ll left = 0, right = n - 1;
        bool ok = true;
        for (ll i = 1; i <= n; i++) {
            if (p[left] == i){
                left++;
            }
            else if (p[right] == i){
                right--;
            }
            else{
                ok = false;
                break;
            }
        }
        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
