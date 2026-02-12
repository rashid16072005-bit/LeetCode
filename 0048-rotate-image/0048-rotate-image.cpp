class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        // int n = matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(i==j) continue;
                else 
                {
                    // int temp = matrix[i][j];
                    // matrix[i][j] = matrix[j][i];
                    // matrix[j][i] = temp;
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        for(int k=0;k<n;k++)
        {
            // int i=0,j=n-1;
            // while(i<j)
            // {
            //     int temp = matrix[k][i];
            //     matrix[k][i] = matrix[k][j];
            //     matrix[k][j] = temp;
            //     i++;
            //     j--;
            // }
            reverse(matrix[k].begin(),matrix[k].end());
        }
        return;
    }
};