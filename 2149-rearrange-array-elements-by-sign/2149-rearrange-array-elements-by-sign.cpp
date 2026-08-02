class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
        int i=0,j=1;
        int idx = 0;
        while(idx<n){
            if(nums[idx]>0) {
                v[i] = nums[idx];
                i+=2;
                idx++;
            }
            else{
                v[j] = nums[idx];
                j+=2;
                idx++;
            }
        }
        return v;
    }
};