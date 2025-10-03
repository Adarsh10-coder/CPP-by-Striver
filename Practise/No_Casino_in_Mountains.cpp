#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        //input taken

       int cnt = 0;
       int i = 0;
       while (i <= n - k) {
        bool canHike = true;
        for (int j = 0; j < k; j++) {
            if (a[i + j] != 0) {
                canHike = false;
                break;
            }
        }
        if (canHike) {
            cnt++;
            i += k + 1;
        } else {
            i++;
        }
    }
    cout << cnt << endl;
    }
    return 0;
}
