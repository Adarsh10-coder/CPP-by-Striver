#include<iostream>
using namespace std;

int main(){
    int n,lastdigit,count;
    cout<<"Enter any input"<<endl;
    cin>>n;
    count=0;
    while (n>0){
        lastdigit = n%10;
        n=n/10;
        count=count+1;
    }
    cout<<count<<endl;
    

}

