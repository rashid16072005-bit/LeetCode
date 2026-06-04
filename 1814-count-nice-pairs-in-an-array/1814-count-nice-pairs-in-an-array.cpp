class Solution {
public:
    int rev(int n){
        int r = 0;
        while(n!=0){
            int l = n%10;
            r = r*10 + l;
            n /= 10;
        }
        return r;
    }
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        long long count = 0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            nums[i] -= rev(nums[i]);
            
        }
        for(int i=0;i<n;i++){
            if(m.find(nums[i])!=m.end()){
                count += m[nums[i]];
            }
            m[nums[i]]++;
        }
        return (int)(count%1000000007);
    }
};