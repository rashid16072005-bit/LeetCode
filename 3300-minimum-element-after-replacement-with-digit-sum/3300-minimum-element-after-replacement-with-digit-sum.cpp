class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        // int sum = 0;
        for(int i=0;i<n;i++)
        {
            int sum = 0;
            while(nums[i]!=0)
            {
                int l = nums[i]%10;
                sum+=l;
                nums[i]/=10;
            }
            v.push_back(sum);
        }
        sort(v.begin(),v.end());
        return v[0];
    }
};