#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        vector<long long> p(n), s(n);
        for (int i = 0; i < n; i++) cin >> p[i];
        for (int i = 0; i < n; i++) cin >> s[i];
        //input taken

        bool possible = false;
        for (int i = 1; i < n; i++) {
            for(int j=n-2; j>=0; j--){
                if(p[i-1]!=s[j+1]){
                    i++;
                    j--;
                }
                else if((p[i-1]==s[j+1]) && (p[i]==s[j])){
                    possible = true;
                    break;
                }
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
