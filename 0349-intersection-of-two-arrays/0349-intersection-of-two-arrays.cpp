class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>  nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        set<int> s;
        vector<int> v;
        for(int i=0;i<n1;i++){
            s.insert(nums1[i]);
        }
        for(int i=0;i<n2;i++){
            if(s.find(nums2[i])!=s.end()){
                v.push_back(nums2[i]);
                s.erase(nums2[i]);
            }
        }
        return v;
    }
};