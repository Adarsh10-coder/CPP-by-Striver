#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &x : arr) cin >> x;
    // input taken

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                cout << "YES\n2\n";
                cout << arr[i] << " " << arr[j] << "\n";
                return;
            }
        }
    }

    cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
}