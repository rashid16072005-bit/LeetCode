class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int lo = 0, hi = citations.size()-1,mid;
        int ans = 0;
        while(lo<=hi){
            mid = lo + (hi - lo)/2;
            if(citations[mid]>=(n-mid)){
                ans = n-mid;
                hi = mid -1;
            }
            else if(citations[mid]<(n-mid)) lo = mid + 1;
        }
        return ans;
    }
};