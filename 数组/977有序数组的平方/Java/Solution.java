import java.util.*;

class Solution {
    public int[] sortedSquares(int[] nums) {
        // int[]res = new int[]{0,1,9,16,100};
        int left = 0;
        int right = nums.length - 1;
        int i = 1;
        int[] res = new int[nums.length];
        while(left <= right) {
            if (nums[left]*nums[left] > nums[right]*nums[right]) {
                res[nums.length-i] = nums[left]*nums[left];
                System.out.println("left:"+left);
                left++;
            } else {
                res[nums.length-i] = nums[right]*nums[right];
                System.out.println("right:"+right);
                right--;
            }
            i++;
        }
        return res;
    }
    public static void main(String[] args) {
        int[] nums = new int[]{-4,-1,0,3,10};
        int[] exp  = new int[]{0,1,9,16,100};
        int[] res =  new int[nums.length];
        Solution sol = new Solution();
        res = sol.sortedSquares(nums);
        System.out.println(Arrays.toString(nums));
        System.out.println(Arrays.toString(res));
        System.out.println(Arrays.toString(exp));
    }
}
