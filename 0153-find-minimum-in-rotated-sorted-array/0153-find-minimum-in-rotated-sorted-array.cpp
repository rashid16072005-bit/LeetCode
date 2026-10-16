class Solution {
public:
    int findMin(vector<int>& nums) {
        int n =nums.size();
        if(n<3){
            int res = INT_MAX;
            for(int i=0;i<n;i++)
                res = min(res,nums[i]);
            return res;
        }
        int lo = 0,hi = nums.size()-1,mid;
        int ans = nums[0];
        while(lo<=hi){
            mid = lo + (hi-lo)/2;
            // if(lo==n-1) return nums[lo];
            if(nums[mid]>nums[n-1]) lo = mid + 1;
            else if(nums[mid]<nums[n-1]) {
                ans = nums[mid];
                hi = mid - 1;
            }
            else return nums[mid];
            // else break;
        }
        return ans;
    }
};