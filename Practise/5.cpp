// https://codeforces.com/problemset/problem/2125/A


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t; 
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        // input taken

       sort(s.begin(), s.end(), greater<char>());
       cout << s <<endl;
    }
    return 0;
}
