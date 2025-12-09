#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n);
        for(int i = 0; i < n; i++){
            cin >> p[i];
        }
        string x;
        cin >> x;
        // input taken

        int left = n, right = -1;
        for(int i = 0; i < n; i++){
            if(x[i] == '1'){
                left = min(left, i);
                right = max(right, i);
            }
        }
        if(right == -1){
            cout << 0 << "\n";
            continue;
        }
        int mn = INT_MAX, mx = INT_MIN;
        for(int i = left; i <= right; i++){
            mn = min(mn, p[i]);
            mx = max(mx, p[i]);
        }
        int pos1 = -1, pos2 = -1;
        for(int i = 0; i < n; i++){
            if(p[i] == mn && pos1 == -1) pos1 = i;
            if(p[i] == mx && pos2 == -1) pos2 = i;
        }
        int l = min(pos1, pos2);
        int r = max(pos1, pos2);
        if(l <= left && right <= r){
            cout << 1 << "\n";
            cout << l+1 << " " << r+1 << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}
