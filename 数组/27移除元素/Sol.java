import java.util.Arrays;

class Sol {
    public int removeElement(int[] nums, int val) {
        int fast = 0;
        int slow = 0;
        for (;fast < nums.length; fast++) {
            if (nums[fast] != val) {
                nums[slow] = nums[fast];
                slow++;
            }
        }
        return slow;
    }

    public static void main(String[] args) {
        int[] nums = new int[]{0,1,2,2,3,0,4};
        int val = 2;
        Sol s = new Sol();
        int res = s.removeElement(nums,val);
        System.out.println(Arrays.toString(nums));
        System.out.println(res);
    }
}
