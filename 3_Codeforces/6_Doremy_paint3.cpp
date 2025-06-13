#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        // input taken
        
        map<long long,long long>freq_map;
        for(int i=0; i<n; i++){
            freq_map[arr[i]]++;
        }
        if(freq_map.size()>=3){
           cout<<"NO"<<endl;
        }
        else{
          long long freq1 = freq_map.begin()->second;
          long long freq2 = freq_map.rbegin()->second;
          if(freq1 == freq2) 
            cout<<"YES"<<endl;  
          else if(n%2 == 1 && abs(freq1 - freq2) == 1)
            cout<<"YES"<<endl;
          else
            cout<<"NO"<<endl; 
        }  
    }
    return 0;
}