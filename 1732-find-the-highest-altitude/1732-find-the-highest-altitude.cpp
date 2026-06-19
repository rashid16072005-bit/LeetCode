class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        // gain[0] = gain[]
        for(int i=1;i<n;i++){
            gain[i] += gain[i-1];
        }
        int mx = INT_MIN;
        for(int i=0;i<n;i++){
            mx = max(mx,gain[i]);
        }
        if(mx<0) return 0;
        return mx;
    }
};