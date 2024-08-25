#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // return 2;
        int res = INT_MAX;
        int left = 0;
        int right = 0;
        int ans = 0;
        for (;right < nums.size();right++) {
            cout << "right: " << right << endl;
            ans += nums[right]; 
            // 缩小逻辑
            while(ans - nums[left] >= target) {
                cout << "left: " << left << endl;
                ans -= nums[left];
                left++; 
            }
            if (ans >= target) {
                res = res < (right-left+1) ? res : (right-left+1);
                cout << "res: " << res << endl;
            }
            // while(ans >= target) {
            //     res = res < (right-left+1) ? res : (right-left+1);
            //     ans -= nums[left++];
            //     cout << "left: " << left << endl;
            //     cout << "res: " << res << endl;
            // }
        }
         if (ans < target) {
             res = 0;
         }
        return res;
    }
};

void print(const int &i) {
    cout << i << ' ';
}

int main() {
    Solution sol;
    // vector<int> nums = {2,3,1,2,4,3};
    vector<int> nums = {2,3,1,2};
    for_each(begin(nums),end(nums),print);
    cout << endl;
    int target = 7;
    int res = sol.minSubArrayLen(target,nums);
    cout << res << endl;
    return 0;
}
