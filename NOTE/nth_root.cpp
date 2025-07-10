#include <bits/stdc++.h>
using namespace std;

int func(int mid, int N, int M){
    long long ans = 1;
    for (int i = 1; i <= N; i++){
        ans = ans * mid;
        if (ans > M) return 2; // early exit if overflow
    }
    if (ans == M) return 1;
    else if(ans < M) return 0;
}

int NthRoot(int N, int M){
    int low = 1;
    int high = M;
    while (low <= high){
        long long mid = low + (high - low) / 2;
        int rootN = func(mid, N, M);
        if (rootN == 1){
           return mid;
        }
        else if (rootN == 0){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int ans = NthRoot(3, 27);
    cout << ans << endl;
    return 0;
}
