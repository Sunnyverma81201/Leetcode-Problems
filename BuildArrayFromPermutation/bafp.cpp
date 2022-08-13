#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {

        // Approach 1:
        // int n = nums.size();
        // vector<int> ans;
        // for (int i = 0; i < n; i++)
        // {
        //     ans.push_back(nums[nums[i]]);
        // }
        // return ans;

        // Approach 2: with O(1) memory usage
        

    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums;
    nums = s.buildArray(nums);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(5);
    nums.push_back(3);
    nums.push_back(4);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
