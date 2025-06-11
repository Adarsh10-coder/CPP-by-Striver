#include<iostream>
using namespace std;

int main(){
    int n,lastdigit,ans;
    cout<<"Enter any input"<<endl;
    cin>>n;
    ans=0;
    int orig=n;
    while (n>0){
        lastdigit = n%10;
        ans=(ans*10)+lastdigit;
        n=n/10;
    }
    if(orig==ans){
        cout<<"It is palindrome number";
    }
    else{
        cout<<"It is not palindrome number";
    }
    

}

