class Solution {
    public int longestMonotonicSubarray(int[] nums) {
        int n = nums.length;
        int sInc = 1,sDec = 1,ans=1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                sInc++;
                sDec = 1;
            }
            else if(nums[i]<nums[i-1]){
                sDec++;
                sInc = 1;
            }
            else{
                sInc = 1;
                sDec = 1;
            }
            ans = Math.max(ans,Math.max(sInc,sDec));
        }
        return ans;
    }
}