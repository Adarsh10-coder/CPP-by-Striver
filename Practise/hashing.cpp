#include<iostream>
using namespace std;


int main() {
    int hash[1000000] = {};
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        hash[arr[i]] += 1;
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;

        cout<<hash[num]<<endl;
    }
    return 0;
}