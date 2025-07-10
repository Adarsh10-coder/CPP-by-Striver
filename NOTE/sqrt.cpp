#include <bits/stdc++.h>
using namespace std;

long long floorSqrt(long long n){
    long long low = 0;
    long long high = n;
    long long ans = -1;
    while (low <= high){
        long long mid = low + (high - low) / 2;
        long long sqrt = mid * mid;
        if (sqrt == n){
            return mid; // exact square root found
        }
        else if (sqrt < n){
            ans = mid;      // update the answer
            low = mid + 1;  // go right
        }
        else{
            high = mid - 1; // go left
        }
    }
    return ans;
}

int main(){
    int ans = floorSqrt(36);
    cout << ans << endl;
    return 0;
}
