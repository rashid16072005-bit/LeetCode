class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int total = 0,l_sum = 0,r_sum = 0;
        for(int i=0;i<n;i++){
            total += nums[i];
        }
        for(int i=0;i<n;i++){
            r_sum = total - nums[i] - l_sum;
            if(l_sum==r_sum){
                return i;
            }
            l_sum += nums[i];
        }
        return -1;
    }
};