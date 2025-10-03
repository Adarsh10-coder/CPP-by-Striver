#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        // input taken

        long long sum = 0;
        for(int i=0; i<n; i++){
            if(a[i]>b[i]){
                sum += a[i]-b[i];
            }
        }
        cout << sum + 1 << endl;
    }
    return 0;
}
