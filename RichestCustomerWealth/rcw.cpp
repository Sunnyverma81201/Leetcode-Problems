#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richest = 0;
        for(auto &customer: accounts){
            for(int i = 1; i<customer.size();i++){
                customer[0]+=customer[i];
            }
            if(richest<customer[0]){
                richest = customer[0];
            }
        }
        return richest;
    }
};


int main(int argc, char const *argv[])
{
    Solution s;
    vector<vector<int>> nums;

    nums.push_back({2,8,7});
    nums.push_back({7,1,3});
    nums.push_back({1,9,5});
    int n = s.maximumWealth(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            cout << nums[i][j] << " ";
        }
    }
    return 0;
}