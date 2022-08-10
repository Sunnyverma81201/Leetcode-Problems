#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[ans]){
                ans++;
                nums[ans]=nums[i];
            }
        }
        return ans+1;
        
        // int n = nums.size();
        // int k = 0;
        // if(n>1){
        //     for (int i=0;i<n;i++){
        //     int count = 0,j=i;
        //     while(nums[i]==nums[++j]){
        //         count++;
        //     }
        //         nums[k+1] = nums[i+count+1];
        //         i+=count;
        //         k++;
        //     }
        // }
        // else{
        //     k=n;
        // }
        // return k;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums;
    nums = s.removeDuplicates(nums);
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
