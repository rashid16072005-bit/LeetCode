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

        // OR
        // for(auto &it: v){
        //     if(it <= 0 || it > n) it = 1e6;
        // }

        // for(int i=0; i<n; i++){
        //     int x = abs(v[i]);
        //     if(x<=n){
        //         v[x-1] = -abs(v[x-1]);
        //     }
        // }

        // for(int i=0;i<n;i++) if(v[i]>0) return i+1;
        // return n+1;
    }
};