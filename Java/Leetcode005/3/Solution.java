class Solution{
    public int lengthOfLongestSubstring(String s) {
        Set<Character> occ = new HashSet<Character>();
        int head = 0,tail = 0,n = s.length(),ans = 0;
        for(;head < n;head++){
            if(head != 0){
                occ.remove(s.charAt(head-1));
            }
            while(tail < n && !occ.contains(s.charAt(tail))){
                occ.add(s.charAt(tail));
                tail++;
        }
        ans = Math.max(ans,tail - head);
        }
        return ans;
    }
}
