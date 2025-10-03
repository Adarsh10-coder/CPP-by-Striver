#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &nums, int target){
    int n = nums.size();
    int index = 1;
    for (int i = 0; i < n; i++){
        if (nums[i] == target){
            index = i;
            return index;
            break;
        }
        else{
            return -1;
        }
    }
}
int main(){
       int nums,target;

}
