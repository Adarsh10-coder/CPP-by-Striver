#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        // input taken

        ll ans = 0;
        ll last = -k; 
        for (ll i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (i - last >= k) {
                    ans++;
                    last = i; 
                }
                else {
                    last = i; 
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
