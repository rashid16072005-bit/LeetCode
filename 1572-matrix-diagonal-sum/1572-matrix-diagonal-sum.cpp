class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m = mat.size();
        int dSum = 0;
        for(int i=0;i<m;i++){
            dSum += mat[i][i] + mat[i][m-i-1];
        }
        if(m%2) dSum -= mat[m/2][m/2];
        return dSum;
    }
};