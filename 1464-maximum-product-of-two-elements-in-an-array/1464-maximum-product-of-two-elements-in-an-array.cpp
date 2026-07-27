class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int Max = INT_MIN;
        sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         Max = max(Max,((nums[i]-1)*(nums[j]-1)));
        //     }
        // }
        return (nums[nums.size()-2]-1)*(nums[nums.size()-1]-1);
    }
};