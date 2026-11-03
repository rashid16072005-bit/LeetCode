class Solution {
    public int minMoves(int[] nums) {
        int n = nums.length;
        int max = Integer.MIN_VALUE,res = 0;
        for(int i=0;i<n;i++){
            if(max<nums[i]) max = nums[i];
        }
        for(int i=0;i<n;i++){
            res += max - nums[i];
        }
        return res;
    }
}