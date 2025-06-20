#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int a , b , c , d;
        cin >> a >> b >> c >> d;

        // Step 1
        // If the destination y is to the bottom of the source y, 
        // then it is impossible to reach the destination.
        if (d < b){
            cout << -1 << endl;
            continue;
        }

        // Step 2
        // If the destination y is to the up of the source y, 
        // then the minimum number of moves required is the difference
        // between the destination y and the source y, using operation type 1.
        int moves = d - b;

        // Step 3
        // Since operation type 1 is used to move up and right,
        // the source x will increase by the number of moves.
        a += moves;

        // Step 4
        // If the destination x is to the right of the source x,
        // then it is impossible to reach the destination.
        if (a < c){
            cout << -1 << endl;
            continue;
        }

        // If the destination x is to the left of the source x,
        // then the minimum number of moves required is the difference
        // between the source x and the destination x, using operation type 2.
        moves += (a - c);
        cout << moves << endl;
    }
    return 0;
}