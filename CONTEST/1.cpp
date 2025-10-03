#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        // input taken
        
        int dis1 = abs(a[n-1]-s);
        int dis2 = abs(s-a[0]);
        if(s <= a[0] ){
            cout<<abs(a[n-1]-s)<<endl;
            continue;
        }
        if(s >= a[n-1]){
            cout<< s-a[0] <<endl;
            continue;
        }
        if(dis1>dis2){
            cout<<dis2+a[n-1]-a[0]<<endl;
        }
        else{
            cout<<dis1+a[n-1]-a[0]<<endl;
        }
    }
    return 0;
}
