#include <bits/stdc++.h>
using namespace std;

int main(){

        long long N;
        cin >> N;
        vector<long long>A(N);
        for(int i=0; i<N; i++){
            cin>>A[i];
        }
        // input taken

        long long min_no = abs(A[0]);
        for (int i = 0; i < N; i++) {
            long long abs_val = abs(A[i]);
            if (min_no > abs_val) {
                min_no = abs_val;
            }
        }
        cout<<min_no<<endl;
    
    return 0;
}