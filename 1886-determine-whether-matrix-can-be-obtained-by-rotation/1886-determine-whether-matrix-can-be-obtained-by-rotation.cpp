class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        // for (int k = 0; k < 4; ++k) {
        //     // rotation operation
        //     for (int i = 0; i < n / 2; ++i) {
        //         for (int j = 0; j < (n + 1) / 2; ++j) {
        //             int temp = mat[i][j];
        //             mat[i][j] = mat[n - 1 - j][i];
        //             mat[n - 1 - j][i] = mat[n - 1 - i][n - 1 - j];
        //             mat[n - 1 - i][n - 1 - j] = mat[j][n - 1 - i];
        //             mat[j][n - 1 - i] = temp;
        //         }
        //     }

        //     if (mat == target) {
        //         return true;
        //     }
        // }
        // return false;


        for(int r=0;r<4;r++){
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(i==j) continue;
                    else 
                    {
                        swap(mat[i][j],mat[j][i]);
                    }
                }
            }
            for(int k=0;k<n;k++)
            {
                reverse(mat[k].begin(),mat[k].end());
            }
            if(mat==target) return true;
        }
        return false;
    }
};