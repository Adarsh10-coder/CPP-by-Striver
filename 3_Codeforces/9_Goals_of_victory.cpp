#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n-1; i++) {
            cin >> a[i];
        }
        // input taken

        long long sum_pos = 0, sum_neg = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] >= 0) {
                sum_pos += a[i];
            } else {
                sum_neg -= a[i];
            }
        }
        long long ans = -(sum_pos - sum_neg);
        cout << ans << endl;
    }
    return 0;
}