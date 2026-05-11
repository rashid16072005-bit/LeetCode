class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        for (int i=0;i<n;i++) {
            string num = to_string(nums[i]);
            for (int j=0;j<num.size();j++) {
                string s = to_string(num[j]);
                int x = stoi(s);
                v.push_back(x-48);
            }
        }
        return v;
    }
};