#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        if ((n*n - k)%2!=0) {
            cout << "NO"<<endl;
        } 
        else{
            cout << "YES"<<endl;
        }
    }
    return 0;
}
