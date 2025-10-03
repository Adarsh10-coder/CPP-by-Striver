#include <bits/stdc++.h>
using namespace std;

bool has_common_digit(int x, int y) {
    set<char> digits_x, digits_y;

    for (char c : to_string(x)) digits_x.insert(c);
    for (char c : to_string(y)) digits_y.insert(c);

    for (char d : digits_y) {
        if (digits_x.count(d)) return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        int y = 0;
        while (true) {
            if (has_common_digit(x, y)) {
                cout << y << endl;
                break;
            }
            y++;
        }
    }
    return 0;
}
