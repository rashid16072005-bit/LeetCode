class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
        int posidx = 0,negidx = 0;
        for(int i=0;i<n;i++){
            // int idx = 0;
            if(nums[i]==0) v[i] = nums[i];
            else if(nums[i]>0){
                posidx = (i+nums[i])%n;
                v[i] = nums[posidx];
            }
            else{
                negidx = ((i+(nums[i])%n) + n) % n;
                v[i] = nums[negidx];
            }
        }
        return v;
    }
};