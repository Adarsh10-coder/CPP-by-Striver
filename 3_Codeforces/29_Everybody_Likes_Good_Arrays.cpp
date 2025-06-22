#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++)
            cin >> a[i];
        // input taken

        long long operations = 0;
        for (int i=0; i<n-1; i++){
            if ((a[i] % 2) == (a[i + 1] % 2))
                operations++;
        }
        cout << operations << endl;
    }
    return 0;
}