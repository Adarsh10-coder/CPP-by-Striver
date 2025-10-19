#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(const vector<ll>& a) {
    int n = a.size();
    int even = 0, odd = 0;

    for (ll x : a) {
        if (x % 2 == 0) even++;
        else odd++;
    }

    // Case 1: already at least two even numbers → gcd > 1 possible
    if (even >= 2) return 0;

    // Case 2: exactly one even → just make one odd even
    if (even == 1) return 1;

    // Case 3: all odd → need to make two of them even
    return 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i]; // ignored for easy version

        cout << solve(a) << "\n";
    }
    return 0;
}
