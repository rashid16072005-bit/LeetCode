class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int n = v.size();
        int i=0,j=1;
        // v[i] = nums[i];
        int idx = 0;
        while(j<n){
            if(v[i]==v[j]) j++;
            else{
                v[idx] = v[i];
                i = j;
                j++;
                idx++;
            }
        }
        v[idx] = v[i];
        // idx = 0;
        // for(int i=0;i<v.size();i++){
        //     if(v[i]>=0) idx++;
        // }
        return idx+1;
    }
};