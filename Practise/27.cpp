#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        set<int> s;
        for(int i=0; i<n; i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        // input taken

        ll m = s.size();
        cout<< m + m-1 <<endl;

    }
    return 0;
}
