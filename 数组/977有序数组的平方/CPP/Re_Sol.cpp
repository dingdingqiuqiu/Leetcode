#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        // test
        // res = {0,1,9,16,100};
        int left = 0;
        int right = nums.size() - 1;
        int i = 1;
        while(left <= right) {
            if(nums[left]*nums[left] > nums[right]*nums[right]) {
                res[nums.size()-i] = nums[left]*nums[left];
                // cout << "left:" << left << endl;
                left++;
            } else {
                res[nums.size()-i] = nums[right]*nums[right];
                // cout << "right:" << right << endl;
                right--;
            } 
            i++;
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-4,-1,0,3,10};
    vector<int> exp = {0,1,9,16,100};
    vector<int> res;
    res = sol.sortedSquares(nums);
    for (int i = 0; i < res.size(); i++) {
        if (res[i] == exp[i]) {
            cout << "第" << i << "项匹配成功" << endl;
        }
    }
}
