#include<iostream>
using namespace std;
#include<cmath>

int main(){
    int n,lastdigit,ans;
    cout<<"Enter any input"<<endl;
    cin>>n;
    ans=0;
    int orig=n;
    while (n>0){
        lastdigit = n%10;
        ans += pow(lastdigit,3); 
        n=n/10;
    }
    if(orig==ans){
        cout<<"It is Armstrong number";
    }
    else{
        cout<<"It is not Armstrong number";
    }
    

}

