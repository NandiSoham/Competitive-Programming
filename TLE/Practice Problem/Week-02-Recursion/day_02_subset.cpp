#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> cur_subset;
    vector<vector<int>> ans;

    void solve(int i, vector<int>& nums){
        if(i == nums.size()){
            ans.push_back(cur_subset);
            return;
        }
        
        solve(i+1, nums); 

        cur_subset.push_back(nums[i]);
        solve(i+1, nums);
        cur_subset.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        ans.clear();
        solve(0, nums);
        return ans;
    }
};

int main(){
    vector<int> nums = {1,2,3,4};
    for(auto i : Solution().subsets(nums)){
        for(auto j:i){
            cout << j << " ";
        }
        cout << endl;
    }
}