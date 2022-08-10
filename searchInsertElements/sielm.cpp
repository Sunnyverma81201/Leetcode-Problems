#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int end = nums.size()-1;
        int start = 0,mid;

        while(start <= end){
            mid = (end + start)/2;
            if(nums[mid] == target){
                return mid;
            } 
            else if(nums[mid]<target){
                start = mid+1;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
        }
        if(nums[mid]<target && nums[mid]>target) return mid+1;
        return start;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    int x = 5;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(6);
    int n = s.searchInsert(nums, x);
    cout<<n;
    return 0;
}