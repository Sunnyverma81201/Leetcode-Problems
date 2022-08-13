#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        
        for(auto &i: operations){
            if(i == "++X" || i == "X++"){
                x++;
            } else if(i == "--X" || i == "X--"){
                x--;
            }
        }
        return x;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<string> nums;
    nums.push_back("--X");
    nums.push_back("X++");
    nums.push_back("X++");
    int n = s.finalValueAfterOperations(nums);
    cout<<n;
    return 0;
}