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
        // input taken

        long long positive_cnt = 0;
        long long negative_cnt = 0;
        for (long long i = 0; i < n; i++){
            if (a[i] == 1)
                positive_cnt++;
            else
                negative_cnt++;
        }
        long long operations = 0;
        while (positive_cnt < negative_cnt || negative_cnt % 2 == 1){
            positive_cnt++;
            negative_cnt--;
            operations++;
        }
        cout << operations << endl;
    }
    return 0;
}