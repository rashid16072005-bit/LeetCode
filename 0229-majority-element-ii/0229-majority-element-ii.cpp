class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        // if(n<3) return nums;
        map<int , int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        vector<int> v;
        for(auto mp : m){
            if(mp.second>n/3) v.push_back(mp.first);
        }
        return v;
    }
};