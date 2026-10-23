class Solution {
    public int sortPermutation(int[] nums) {
        int n = nums.length;
        int k = 0,idx = -1;
        for(int i=0;i<n;i++){
            if(i!=nums[i] && k==0) 
            {
                k = nums[i];
                idx = i;
                break;
            }
        }
        for(int i=idx+1;i<n;i++){
            if(i!=nums[i]) k = k & nums[i];
        }
        return k;
    }
}