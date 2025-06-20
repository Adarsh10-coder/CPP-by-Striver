#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        // input taken

        long long cnt = 0;
        long long max_cnt = 0;
        for (int i = 0; i < n; i++){
            if (a[i] == 0){
                cnt++;
                max_cnt = max(max_cnt, cnt);
            }
            else{
                cnt = 0;
            }
        }
        cout << max_cnt << endl;
    }
    return 0;
}
