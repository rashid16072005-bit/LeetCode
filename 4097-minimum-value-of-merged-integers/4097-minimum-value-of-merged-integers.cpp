class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        int res = INT_MAX;
        string str1,str2;
        for(int i=0;i<n-1;i+=2){
            str1 = to_string(nums[i]);
            str2 = to_string(nums[i+1]);
            str1 += str2;
            int num = stoi(str1);
            res = min(res,num);
        }
        return res;
    }
};