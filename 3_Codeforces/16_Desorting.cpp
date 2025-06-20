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

       long long ans = INT_MAX;
       for(int i=0; i<n-1; i++){
          if(a[i]<=a[i+1]){ // sorted
               long long diff = a[i+1] - a[i];
               long long operation = diff/2 + 1;
               ans = min(ans,operation);
            }
          else{ // unsorted
            ans = 0;
          }
        }
        cout<<ans<<endl;
    }
    return 0;
}