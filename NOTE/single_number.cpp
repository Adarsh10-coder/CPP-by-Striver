// Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice.
// Find the two elements that appear only once. You can return the answer in any order.

#include <bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        long long xr = 0;
        for(int i=0; i<n; i++){
            xr ^= nums[i];
        }
        // a and b are different --> So at least one bit must be different
        // This line extracts the rightmost bit where they differ
        long long diffBit = xr & (-xr);

        int a = 0, b = 0;
        for(int i=0; i<n; i++) {
            if (nums[i] & diffBit){
                a ^= nums[i];
            }
            else{
                b ^= nums[i];
            }
        }
        return {a, b};
    }

int main(){

}    