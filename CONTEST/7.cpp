#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Reverse binary
ll f(ll x) {
    ll rev = 0;
    while (x > 0) {
        rev = (rev << 1) | (x & 1);
        x >>= 1;
    }
    return rev;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        // input taken

        bool found = false;
        for (ll x = 1; x <= 1000; x++) {
            if ((x ^ f(x)) == n) {
                found = true;
                break;
            }
        }
        cout << (found ? "YES" : "NO") << endl;
    }
    return 0;
}
