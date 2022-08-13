#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size()-1;
        int x = n+1;
        if ((digits[n]) + 1 < 10)
        {
            digits[n]++;
        }
        else
        {
            int i = n;
            while ((digits[i]+1) == 10)
            {
                if(i!=0){   
                    digits[i] = 0;
                    i--;
                } else if(i==0){
                    digits[i]=1;
                    digits.push_back(0);
                }
            }
            if(digits[i]!=9 && x==digits.size()){
                digits[i]++;
            }
        }
        return digits;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums;
    nums.push_back(8);
    nums.push_back(9);
    nums.push_back(9);
    nums.push_back(9);
    nums = s.plusOne(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}