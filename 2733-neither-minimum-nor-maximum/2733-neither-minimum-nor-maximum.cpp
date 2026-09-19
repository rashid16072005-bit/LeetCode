class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int min = INT_MAX;
        int max = INT_MIN;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            if(nums[i]<min) min = nums[i];
            if(nums[i]>max) max = nums[i];
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=min && nums[i]!=max) return nums[i];
        }
        return -1;
    }
};