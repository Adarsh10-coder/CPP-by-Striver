#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , x;
        cin >> n >> x;
        vector<long long>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        // input taken

        int maxi = a[0];
        for (int i = 1; i < n; i++){
            if (a[i] - a[i - 1] > maxi)
               maxi = a[i] - a[i - 1];
        }
        if (2 * (x - a[n - 1]) > maxi)
            maxi = 2 * (x - a[n - 1]);

        cout << maxi << endl;
    }
    return 0;
}