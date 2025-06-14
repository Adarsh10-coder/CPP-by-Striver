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

        int sum = 0;
        for(int i=0; i<n; i++){
            sum += a[i];
        }
        if(sum%2 == 0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;  
        
    }
    return 0;
}