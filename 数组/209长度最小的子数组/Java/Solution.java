import java.util.*;

class Solution {
    int INT_MAX = 0x3f3f3f3f;
    public int minSubArrayLen(int target, int[] nums) {
        // int res;
        // res = 2;
        int right = 0;
        int left = 0;
        int res = INT_MAX;
        int sum = 0;
        for (; right < nums.length; right++) {
            sum += nums[right];
            while(sum >= target) {
                res = res < (right - left + 1) ? res : (right - left +1);
                sum -= nums[left++];
            }
        }
        return res == INT_MAX ? 0 : res;
    }

    public static void main(String[] args) {
        int[] nums = new int[]{2,3,1,2,4,3};
        int target = 7;
        Solution sol = new Solution();
        int res = sol.minSubArrayLen(target,nums);
        System.out.println(Arrays.toString(nums));
        System.out.println(res);
    }
}

