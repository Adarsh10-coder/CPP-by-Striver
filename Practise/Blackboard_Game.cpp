#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin >> n;
        // input taken
        
        if(n<=2 && n>0){
            cout<<"Alice"<<endl;
        }
        else if(n%2==0){
            cout<<"Bobe"<<endl;
        }
        else if(n%2==1){
            cout<<"Alice"<<endl;
        }
        
    }
    return 0;
}