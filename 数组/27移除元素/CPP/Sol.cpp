#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0,j = 0; // i指的是已经成功的，j代表处理的
        for (;j < nums.size(); j++) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }
      // for (int i = 0; i < nums.size(); i++) {
      //     cout << nums[i] << " ";
      // }
        return i;
//        nums = {0,1,3,0,4};
//        return 5;
    }
};

int main() {
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    vector<int> expectedNums = {0,0,1,3,4};
    Solution sol;
    int k = sol.removeElement(nums,val);
    // assert k == expectedNums.length;
    assert(k == expectedNums.size());
    sort(nums.begin(),nums.begin()+k);
    for (int i = 0; i < expectedNums.size(); i++) {
        assert (nums[i] == expectedNums[i]);
    }
    cout << "完成匹配" << endl;
    return 0;
}
