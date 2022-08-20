#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> maxCandies;
        
        for(int i = 0; i < n; i++){
            int itotalCandies = candies[i]+extraCandies;
            bool isMax = true;
            for(int j = 0; j < n; j++){
                if(itotalCandies<candies[j]){
                    isMax = false;
                    break;
                }
            }
            maxCandies.push_back(isMax);
        }
        return maxCandies;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(1);
    nums.push_back(3);
    vector<bool> n = s.kidsWithCandies(nums,3);
    for(int i = 0; i<n.size(); i++){
        cout<<n[i]<<" ";
    }
    return 0;
}