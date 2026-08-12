class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n);
        set<int> m;
        for(int i=0;i<n;i++){
            v[i] = i+1;
            m.insert(nums[i]);
        }

        for(int i=0;i<n;i++){
            if(m.find(i+1)==m.end()){
                return i+1;
            }

        }
        return n+1;
    }
};