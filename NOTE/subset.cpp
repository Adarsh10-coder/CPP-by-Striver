#include <bits/stdc++.h>
using namespace std;

bool check_elements(int arr[], int n, int A, int B) {
    vector<int> range;
    for(int i=A; i<=B; i++) {
        range.push_back(i);
    }
    sort(arr, arr + n);
    return includes(arr, arr+n, range.begin(), range.end());
}


int main(){
    int arr[] = {1,2,6,3,8,3,9,5};
    return check_elements(arr, 8, 2, 7);
}