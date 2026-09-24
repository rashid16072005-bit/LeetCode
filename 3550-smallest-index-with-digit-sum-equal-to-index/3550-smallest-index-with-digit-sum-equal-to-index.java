class Solution {
    public int smallestIndex(int[] nums) {
        int n = nums.length;
        int res = 0,temp;
        for(int i=0;i<n;i++){
            
                res = 0;
                temp = nums[i];
                while(temp!=0){
                    res += temp%10;
                    temp /= 10;
                }
                if(res==i) return i;
            
        }
        return -1;
    }
}