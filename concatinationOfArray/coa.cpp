#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n*2);
        for(int i = 0; i<n;i++){
            arr[i]=nums[i];
            arr[i+n] = nums[i];
        }
        return arr;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums = s.getConcatenation(nums);
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}