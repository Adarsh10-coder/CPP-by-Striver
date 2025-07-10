#include <bits/stdc++.h>
using namespace std;

string makeGood(string s){
        string result = "";
        int n = s.size();
        for(int i=0; i<n; i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] = s[i]+32;
            }
            else if(s[i]>='a' && s[i]<='z'){
                result += s[i];
            }
        }
        return result;
    }

int main() {
     string front = makeGood("A man, a plan, a canal: Panama");
        string back ="";
        for(int i=front.size()-1; i>=0; i--){
            back.push_back(front[i]);
        }
        cout<<back<<endl;
    
    return 0;
}
