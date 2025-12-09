#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll q;
    cin >> q;
    while (q--) {
        ll n;
        cin >> n;
        string s;
        string t;
        cin >> s >> t;
        // input taken
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s==t){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }   
    }
    return 0;
}
