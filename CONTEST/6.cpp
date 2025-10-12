#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;                    
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i]; 
        }
        // input taken           

        unordered_set<int> s;
        for (int x : a){
            if (x >= 0) s.insert(x);
        }
        int mex = 0;
        while (s.find(mex) != s.end()){
            mex++;
        }
        cout << mex << endl;     
    }
    return 0;
}
