#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int goodPair = 0;
        for(int i = 0;i<n;i++){
            for(int j = i+1; j<n; j++){
                if(nums[i]==nums[j]){
                    goodPair++;
                }
            }
        }
        return goodPair;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(3);
    int n = s.numIdenticalPairs(nums);
    cout<<n;
    return 0;
}