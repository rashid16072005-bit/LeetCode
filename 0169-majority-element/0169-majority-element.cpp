class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        // sort(nums.begin(),nums.end());
        // return nums[(nums.size())/2];
        int count = 0,candidate;
        for(int i=0;i<n;i++){
            if(count==0) candidate = nums[i];
            if(candidate == nums[i]) count++;
            else count--;
        }
        return candidate;

    }
};