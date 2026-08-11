class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int Max = INT_MIN;
        for(int i=1;i<n;i++){
            if(nums[i]==0) continue;
            nums[i] += nums[i-1];
        }
        for(int i=0;i<n;i++){
            Max = max(Max,nums[i]);
        }
        return Max;
    }
};