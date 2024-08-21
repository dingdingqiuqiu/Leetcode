#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    // 0表示left,1表示right,返回小的那个
    int min(vector<int> nums, int left, int right) {
        int res;
        // 两边都未跑完
        if (left >= 0 && right < nums.size()) {
            // if (left * left < right * right) {
            //     res = 0;
            // } else {
            //     res = 1;
            // }
            if (nums[left]*nums[left] < nums[right]*nums[right]) {
                res = 0;
            } else {
                res = 1;
            }
        } else if (left < 0) {
            res = 1;
        } else if (right >= nums.size()){
            res = 0;
        }
        return res;
    }

    vector<int> sortedSquares(vector<int>& nums) {
        // 双指针返回排序好的数组
        vector<int> res;
        // res = {0,1,9,16,100};
        int indexZ;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0) {
                indexZ = i;
                break;
            }
        }
        if (indexZ == 0) {
            for (int i = 0; i < nums.size(); i++) {
                res.push_back(nums[i] * nums[i]);
            }
            return res;
        }
        int left = indexZ - 1;
        int right = indexZ;
        while (left >= 0 || right < nums.size()) {
            // 这里应该返回left或right
            // 0表示left;1表示right;
            int tmp = min(nums,left,right);
            if (tmp) {
                res.push_back(nums[right]*nums[right]);
                right++;
            } else {
                res.push_back(nums[left]*nums[left]);
                left--;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-4,-1,0,3,10};
    vector<int> exp  = {0,1,9,16,100};
    vector<int> res;
    res = sol.sortedSquares(nums);
    for (int i = 0; i < res.size(); i++) {
        if (res[i] != exp[i]) {
            cout << "第" << i << "个不匹配" << endl;
        } else {
            cout << "第" << i << "个匹配" << endl;
        }
    }
    
    for (int i = 0;i < res.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    for (int i = 0;i < res.size(); i++) {
        cout << exp[i] << " ";
    }
    cout << endl;
    for (int i = 0;i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}
