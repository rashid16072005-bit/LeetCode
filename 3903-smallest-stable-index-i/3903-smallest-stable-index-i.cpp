class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int idx = -1;
        for(int i=0;i<n;i++){
            int Max = INT_MIN;
            int Min = INT_MAX;
            for(int j=0;j<=i;j++){
                Max = max(Max,nums[j]);
            }
            for(int k=i;k<n;k++){
                Min = min(Min,nums[k]);
            }
            if(Max-Min <= k) return i;
        }
        return -1;

    }
};