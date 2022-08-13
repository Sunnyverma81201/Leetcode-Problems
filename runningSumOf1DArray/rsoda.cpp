#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size()-1;
        for(int i = n;i>=0;i--){
            int j = i-1;
            while(j>=0){
                nums[i]+=nums[j];
                j--;
            }
        }
        return nums;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums = s.runningSum(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}