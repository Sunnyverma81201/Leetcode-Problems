#include <iostream>
#include <vector>

using namespace std;

class SubrectangleQueries
{
public:
    SubrectangleQueries(vector<vector<int>> &rectangle)
    {
    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
    {
    }

    int getValue(int row, int col)
    {
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */

int main(int argc, char const *argv[])
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(1);
    vector<int> b;
    a.push_back(4);
    a.push_back(3);
    a.push_back(4);
    vector<int> c;
    a.push_back(3);
    a.push_back(2);
    a.push_back(1);
    vector<int> d;
    a.push_back(1);
    a.push_back(1);
    a.push_back(1);

    vector<vector<int>> s;
    
    s.push_back(a);
    s.push_back(b);
    s.push_back(c);
    s.push_back(d);

    SubrectangleQueries subrectangleQueries = new SubrectangleQueries(s);
    // The initial rectangle (4x3) looks like:
    // 1 2 1
    // 4 3 4
    // 3 2 1
    // 1 1 1
    subrectangleQueries.getValue(0, 2); // return 1
    subrectangleQueries.updateSubrectangle(0, 0, 3, 2, 5);
    // After this update the rectangle looks like:
    // 5 5 5
    // 5 5 5
    // 5 5 5
    // 5 5 5
    subrectangleQueries.getValue(0, 2); // return 5
    subrectangleQueries.getValue(3, 1); // return 5
    subrectangleQueries.updateSubrectangle(3, 0, 3, 2, 10);
    // After this update the rectangle looks like:
    // 5   5   5
    // 5   5   5
    // 5   5   5
    // 10  10  10
    subrectangleQueries.getValue(3, 1); // return 10
    subrectangleQueries.getValue(0, 2); // return 5
    return 0;
}
