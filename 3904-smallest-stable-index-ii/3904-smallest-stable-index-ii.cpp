class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int idx = -1;
        // for(int i=0;i<n;i++){
        //     int Max = INT_MIN;
        //     int Min = INT_MAX;
        //     for(int j=0;j<=i;j++){
        //         Max = max(Max,nums[j]);
        //     }
        //     for(int k=i;k<n;k++){
        //         Min = min(Min,nums[k]);
        //     }
        //     if(Max-Min <= k) return i;
        // }
        int pre[n],suf[n],Max = INT_MIN,Min = INT_MAX;
        for(int i=0;i<n;i++){
            Max = max(Max,nums[i]);
            pre[i] = Max;
        }
        for(int i=n-1;i>=0;i--){
            Min = min(Min,nums[i]);
            if((pre[i]-Min<=k)) idx = i;
        }
        if(idx!=-1) return idx;
        return -1;
    }
};