#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        // input taken

        long long ans1 = (n + 1) * 5 / 2;
        long long ans2 = n * 5 / 2;

        if (n <= 6) {
            cout << 15 << endl;
        } else {
            if (n % 2 != 0) {
                cout << ans1 << endl;
            } else {
                cout << ans2 << endl;
            }
        }
    }
    return 0;
}
