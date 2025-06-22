#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        string s;
        cin >> s;
        // input taken

        long long ans = n;
        long long left = 0, right = n - 1;
        while (left <= right){
            if (s[left] != s[right]){
                ans -= 2;
            }
            else{
                break;
            }
            left++;
            right--;
        }
        cout << ans << endl;
    }
    return 0;
}