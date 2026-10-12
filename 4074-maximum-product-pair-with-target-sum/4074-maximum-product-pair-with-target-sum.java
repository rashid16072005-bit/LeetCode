class Solution {
    public int[] maxProductPair(int[] nums, int target) {
        int n = nums.length;
        int[] arr = new int[2];
        arr[0] = -1;
        arr[1] = -1;
        int max = Integer.MIN_VALUE;
        int prod = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[i]+nums[j]==target && nums[i]>nums[j]){
                    prod = nums[i]*nums[j];
                    if(max<prod){
                        max = prod;
                        arr[0] = i;
                        arr[1] = j;
                    }
                }
            }
        }
        return arr;
    }
}