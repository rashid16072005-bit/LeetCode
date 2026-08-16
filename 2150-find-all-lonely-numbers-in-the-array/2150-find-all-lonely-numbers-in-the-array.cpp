class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        int n = nums.size();
        map<int , int> m;
        vector<int> v;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(m[nums[i]]==1 && m.count(nums[i] + 1) == 0 && m.count(nums[i] - 1) == 0) 
            v.push_back(nums[i]);
        }
        return v;
    }
};