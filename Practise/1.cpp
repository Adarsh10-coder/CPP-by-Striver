// https://codeforces.com/problemset/problem/2130/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        vector<long long> s(n);
        for (int i = 0; i < n; i++) cin >> s[i];
        //input taken

        int cnt = 0;
        int sum = 0;
        for(int i=0; i<n; i++){
            if(s[i] == 0){
                cnt++;
            }
            sum += s[i];
        }
       cout<< sum + cnt <<endl;
    }
    return 0;
}
