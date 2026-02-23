#include<iostream>
using namespace std;


void Ntimes(int i,int n){
    if(i>n)
    return;
    cout<<"Adarsh"<<endl;
    Ntimes(i+1,n);
}
int main(){
    int n;
    cout<<"Enter any input"<<endl;
    cin>>n;
    Ntimes(1,n);
}