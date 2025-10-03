#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, s;
        cin >> m >> s;
        vector<int> b(m);
        for (int i = 0; i < m; i++) cin >> b[i];
        // input taken

        sort(b.begin(),b.end());
        bool possibe = false;
        int total_sum = b[m-1]*(b[m-1]+1)/2;
        int sum = 0;
        for(int i=0; i<m; i++){
            sum += b[i]; 
        }
        int miss_sum = total_sum - sum;
        if(miss_sum == s){
            possibe = true;
        }
        for(int i=b[m-1]+1; i<=1e5; i++){
            miss_sum += i;
            if(miss_sum == s){
                possibe = true;
                break;
            }
        }
        if(possibe){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       
    }
    return 0;
}
