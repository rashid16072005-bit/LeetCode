class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int num = 0;
        for(int i=0;i<m;i++){
            int lo = 0,hi = n-1,mid;
            while(lo<=hi){
                mid = lo + (hi-lo)/2;
                if(grid[i][mid]>=0) lo = mid + 1;
                else hi = mid -1;
            }
            num += n-hi-1;
        }
        return num;
    }
};