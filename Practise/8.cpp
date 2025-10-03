// https://codeforces.com/problemset/problem/2121/B


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        // input taken

        vector<int> freq(26,0);
        for (char c : s){
            freq[c - 'a']++;
        }
        int cnt = 0;
        for (int f : freq){
            if (f == 1) cnt++;
        }
        if(n==3 || n==4){
            if(cnt>1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            if(cnt>2){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}