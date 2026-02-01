class Solution {
public:
    int minimumCost(vector<int>& nums) {
        if(nums.size()==3) return nums[0]+nums[1]+nums[2];
        int min = INT_MAX;
        int idx1;
        int sum = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(min>nums[i])
            {
                min = nums[i];
                idx1 = i;
            }
        }
        sum += min;
        min = INT_MAX;
        for(int i=1;i<nums.size();i++)
        {
            if(min>=nums[i] && i!=idx1)
            {
                min = nums[i];
                // idx2 = i;
            }
        }
        sum += min;
        return sum;
    }
};