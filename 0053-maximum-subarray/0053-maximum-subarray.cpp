class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        bool flag = false;
        int max_sum = INT_MIN,curr_sum=0;
        for(int i=0;i<n;i++){
            curr_sum += nums[i];
            if(curr_sum<0) curr_sum = 0;
            else {
                max_sum = max(max_sum,curr_sum);
                flag = true;
            }
            
        }
        if(!flag){
            for(int i=0;i<n;i++){
                max_sum = max(max_sum,nums[i]);
            }
        }
        return max_sum;
    }
};