class Solution {
public:
    void solution(vector<int>& nums,vector<vector<int> >& v,vector<int> a,int idx)
    {
        if(idx==nums.size())
        {
            v.push_back(a);
            return;
        }
        solution(nums,v,a,idx+1);
        a.push_back(nums[idx]);
        solution(nums,v,a,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> > v;
        vector<int> a;
        solution(nums,v,a,0);
        return v;
    }
};