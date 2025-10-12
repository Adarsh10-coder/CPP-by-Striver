#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];
        // input taken
        
        vector<ll> a;
        a.push_back(1);
        ll current = 1;
        for (int i = 1; i < n; i++) {
            if (b[i] == b[i - 1] + 1) {
                a.push_back(a.back());
            } 
            else if (b[i] == b[i - 1] + 2) {
                if (i - 2 >= 0){
                    a.push_back(a[i - 2]);
                }
                else{
                    current++;
                    a.push_back(current);
                }
            } 
            else {
                current++;
                a.push_back(current);
            }
        }
        for (auto x : a) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
