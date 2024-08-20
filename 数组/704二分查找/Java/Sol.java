class Sol {
    public int search(int[] nums, int target) {
        int left = 0;
        int right = nums.length - 1;
        int mid;
        while (left <= right) {
           mid = (left + right) / 2;
           if(nums[mid] < target) {
               left = mid + 1;
           } else if(nums[mid] > target) {
               right = mid -1;
           } else {
               return mid;
           }
        } 
        return -1;
    }
    public static void main(String[] args) {
        int [] nums = new int[]{-1,0,3,5,9,12};
        int target = 2;
        Sol s = new Sol();
        int res = s.search(nums,target);
        System.out.println(res);
    }
}
