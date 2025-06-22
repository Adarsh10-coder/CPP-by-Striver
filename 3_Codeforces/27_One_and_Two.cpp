#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++){
            cin >> a[i];
        }
        // inputs taken

        long long total_twos = 0;
        long long current_twos = 0;

        for (int i = 0; i < n; i++){
            if (a[i] == 2)
                total_twos++;
        } 
        long long ans = -1;
        for (int i = 0; i < n; i++){
            if (a[i] == 2)
                current_twos++;
              if ((current_twos) == (total_twos - current_twos)){
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}