class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target){
        vector<int> v;
        int n = nums.size();
        if(n==1)
        {
            if(nums[0]==target)
            {
                return {0,0};
            }
            else
            {
                return {-1,-1};
            }
        }
        if(n==2)
        {
            if(nums[0]==target)
            {
                v.push_back(0);
                if(nums[1]==target)
                v.push_back(1);
                else
                v.push_back(0);
            }
            else if(nums[1]==target)
            {
                return {1,1};
            }
            else
            {
                return {-1,-1};
            }
            return v;
        }
        int lo=0,hi=n-1,mid;
        bool flag = false;
        while(lo<=hi)
        {
            mid = lo + (hi-lo)/2;
            if(nums[mid]==target){
                if(mid==0){
                    flag = true;
                    v.push_back(mid);
                    break;
                }
                if(nums[mid-1]!=target){
                    flag = true;
                    v.push_back(mid);
                    break;
                }
                else{
                    hi = mid - 1;
                }
            }
            else if(nums[mid]<target) lo = mid + 1;
            else{
                hi = mid - 1;
            }   
        }
        lo=0,hi=n-1;;
        while(lo<=hi)
        {
            mid = lo + (hi-lo)/2;
            if(nums[mid]==target){
                if(mid==n-1){
                    flag = true;
                    v.push_back(mid);
                    break;
                }
                if(nums[mid+1]!=target){
                    flag = true;
                    v.push_back(mid);
                    break;
                }
                else{
                    lo = mid + 1;
                }
            }
            else if(nums[mid]<target) lo = mid + 1;
            else hi = mid - 1;  
        }
        if(flag==false) return {-1,-1};
        return v;
    }
};