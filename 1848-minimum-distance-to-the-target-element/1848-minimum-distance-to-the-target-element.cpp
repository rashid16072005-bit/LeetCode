class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int idx = -1;
        int min = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                idx = i;
                if(min>abs(idx-start))
                min = abs(idx-start);
            }
            
        }
        return min;
    }
};