#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    void helper(int i, int n, vector<int> &temp, vector<vector<int>> &result, vector<int> &nums)
    {
        if (i == n)
        {
            if (find(result.begin(), result.end(), temp) == result.end())
            {
                result.push_back(temp);
            }
            return;
        }

        helper(i + 1, n, temp, result, nums);

        temp.push_back(nums[i]);
        helper(i + 1, n, temp, result, nums);
        temp.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        int n = nums.size();
        vector<vector<int>> result;
        vector<int> temp;

        sort(nums.begin(), nums.end());
        helper(0, n, temp, result, nums);

        return result;
    }
};

int main()
{
    vector<int> nums = {1, 2, 2};
    for (auto i : Solution().subsetsWithDup(nums))
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}