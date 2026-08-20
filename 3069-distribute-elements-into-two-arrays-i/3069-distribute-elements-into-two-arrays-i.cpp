class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int idx1=0,idx2=0;
        for(int i=2;i<nums.size();i++){
            if(arr1[idx1]>arr2[idx2]){
                arr1.push_back(nums[i]);
                idx1++;
            }
            else{
                arr2.push_back(nums[i]);
                idx2++;
            }
        }
        idx1 = 0;
        for(int i=0;i<arr1.size();i++){
            nums[idx1] = arr1[i];
            idx1++;
        }
        for(int i=0;i<arr2.size();i++){
            nums[idx1] = arr2[i];
            idx1++;
        }
        return nums;
    }
};