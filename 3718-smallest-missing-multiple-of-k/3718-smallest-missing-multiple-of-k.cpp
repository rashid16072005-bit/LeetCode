class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map<int , int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int i = 1;
        int temp;
        while(true){
            temp = k * i;
            if(m.find(temp)!=m.end()){
                i++;
            }
            else return temp;
        }
        return temp;
    }
};