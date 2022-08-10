#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        // Approach 1
         int n = nums.size();
        int k = 0;
        int temp;
        int nonEqualCount = 0;
        for (int i = 0; i < n; i++)
        {
            if(nums[i] != val){
                nonEqualCount++;
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            if(nums[i] == val){
                for(k = i;k < n && nums[k]==val;k++);  // to find next non equal element
                if (k<n){
                    temp = nums[i]; //for swaping the element
                    nums[i] = nums[k];
                    nums[k] = temp;
                }
                else{
                    temp = nums[i]; //for swaping the element
                    nums[i] = nums[k-1];
                    nums[k-1] = temp;
                }
            }
            
        }
        return nonEqualCount;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    int x = 2;
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    int n = s.removeElement(nums, x);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}