#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        for(string &sentence: sentences){
            int w_count = 1;
            for(int i = 0;i<sentence.size();i++){
                if(sentence[i]==' '){
                    w_count++;
                }
            }
            if(max < w_count) max = w_count;
        }
        return max;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<string> nums;
    nums.push_back("please wait");
    nums.push_back("continue to fight");
    nums.push_back("continue to win");
    int n = s.mostWordsFound(nums);
    cout<<n;
    return 0;
}