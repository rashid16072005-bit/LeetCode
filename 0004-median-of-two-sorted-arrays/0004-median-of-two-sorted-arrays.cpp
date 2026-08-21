class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size();
        int i = 0,j = 0;
        vector<int> v;
        double ans = 0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }
            else{
                v.push_back(nums2[j]);
                j++;
            }
        }
        if(i==m){
            while(j<n){
                v.push_back(nums2[j]);
                j++;
            }
        }
        else{
            while(i<m){
                v.push_back(nums1[i]);
                i++;
            }
        }
        n = v.size();
        if(n%2==0){
            ans = v[n/2-1]+v[n/2];
            ans /= 2;
        }
        else ans = v[n/2];
        return ans;
    }
};