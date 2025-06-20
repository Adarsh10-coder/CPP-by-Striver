#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n , k;
        cin >> n >> k;
        // input taken

        if((n%2==0 && k%2==0) || (n%2==1 && k%2==1)){
            cout<<"Yes"<<endl;
        }
        else if(n%2==1 && k%2==0){
            cout<<"No"<<endl;
        }
        else if(n%2==0 && k%2==1){
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
