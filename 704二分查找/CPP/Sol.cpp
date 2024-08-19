#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int mid = (left + right) / 2;
        while (left <= right) {
        // 直接判断中间时间开销较大
        //    if (nums[mid] == target) {
        //        return mid;
        //    } else if (nums[mid] < target) {
        //        left = mid + 1;
        //    } else {
        //        right = mid - 1;
        //    }
            if (num[mid] > target) {
                right = mid - 1;
            } else if (num[mid] < target) {
                left = mid + 1;
            } else {
                return mid;
            }
            mid = (left + right) / 2;
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    Solution sol;
    int res = sol.search(nums,target);
    cout << res << endl;
}
