class Solution {
public:
    // void display(vector<int> &b)
    // {
    //     for(int i=0;i<b.size();i++)
    //     {
    //         cout << b[i] << " ";
    //     }
    // }
    // void reversePart(int i,int j,vector<int> &b)
    // {
    //     while(i<=j)
    //     {
    //         swap(b[i],b[j]);
    //         i++;
    //         j--;
    //     }
        
    // }
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                idx = i;
                break;
            }
        }
        if(idx==-1) 
        {
            reverse(nums.begin(),nums.end());
           // display(nums);
            return;
        }
        reverse(nums.begin()+idx+1,nums.end());
        // reversePart(idx,idx+1,nums);
        int j = -1;
        for(int i=idx+1;i<nums.size();i++)
        {
            if(nums[i]>nums[idx])
            {
                j = i;
                break;
            }
        }
        swap(nums[idx],nums[j]);
        // display(nums);
        return;
    }
};