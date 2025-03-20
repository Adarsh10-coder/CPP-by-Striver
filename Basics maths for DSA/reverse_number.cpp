#include<iostream>
using namespace std;

int main(){
    int n,lastdigit,ans;
    cout<<"Enter any input"<<endl;
    cin>>n;
    ans=0;
    while (n>0){
        lastdigit = n%10;
        n=n/10;
        ans=(ans*10)+lastdigit;
    }
    cout<<ans<<endl;
    

}

