#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        // input taken
        
        ll cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                if (i < n) {
                    if (a[i] >= a[i + 1]){
                        ll diff = a[i] - a[i+1] + 1;
                        cnt += diff;
                        a[i] = diff;
                    }
                }
            } 
            else {
                if (i < n) {
                    if (a[i] <= a[i + 1]) {
                        ll diff = a[i + 1] - a[i] + 1;
                        cnt += diff;
                        a[i + 1] = diff;
                    }
                }
            }
        }
        
        cout << cnt << endl;
    }
    
    return 0;
}