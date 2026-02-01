class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // vector<int> v;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(nums[i]+nums[j]==target)
        //         {
        //             v.push_back(i);
        //             v.push_back(j);
        //         }
        //     }
        // }
        // return v;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            int res = target - nums[i];
            if(m.find(res)!=m.end()){
                // v.push_back(m[res]);
                // v.push_back(i);
                return {m[res],i};
            }
            else{
                m[nums[i]] = i;
            }
        }
        return {0,0};
    }
};