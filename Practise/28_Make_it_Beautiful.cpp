#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        // input taken
        
        vector<long long>ans = a;
        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=i+1; j<n-1; j++){
                sum += ans[j];
                if(sum == ans[j+1])
                    swap(ans[j],ans[j+1]);
                    //break;
            }
        }
        bool found = false;
        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=i+1; j<n; j++){
                sum += ans[j];
                if(sum != ans[j+1])
                    found = true;
                }
            }
        if(found){
            cout << "YES" << endl;
            for(auto x : ans){
                cout << x << " ";
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}