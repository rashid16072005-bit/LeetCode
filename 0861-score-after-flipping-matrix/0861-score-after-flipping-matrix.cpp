class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        // making first column all elements 1
        for(int i=0;i<r;i++)
        {
            if(grid[i][0]==0){
                for(int j=0;j<c;j++)
                {
                    if(grid[i][j]==0) grid[i][j] = 1;
                    else
                    grid[i][j] = 0;
                }
            }
        }

        // now flipping columns whose noZ is greater
        for(int j=1;j<c;j++)
        {
            int noZ = 0,noO = 0;
            for(int i=0;i<r;i++)
            {
                if(grid[i][j]==0) noZ++;
                else noO++;
            }
            if(noZ>noO)
            {
                for(int i=0;i<r;i++)
                {
                    if(grid[i][j]==0) grid[i][j] = 1;
                    else grid[i][j] = 0;
                }
            }
        }

        // Now calculating score of matrix
        int sum = 0;
        for(int i=0;i<r;i++)
        {
            int pow = 1;
            for(int j=c-1;j>=0;j--)
            {
                sum += grid[i][j] * pow;
                pow *= 2;
            }
        }
        return sum;
    }
};