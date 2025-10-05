#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        // input taken

        string p = s;
        sort(p.begin(), p.end());
        ll cnt = 0;
        for(int i=0; i<n; i++){
            if(s[i]!=p[i]){
                cnt++;
            }
        }
        cout<< cnt/2 <<endl;
    }
    return 0;
}
