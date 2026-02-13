class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int minR = 0,minC = 0,maxR = m-1,maxC = n-1;
        int tne = m*n;
        int count = 0;
        vector<int> v;
        while(minR<=maxR && minC<=maxC){
            for(int j=minC;j<=maxC && count<tne;j++){
                v.push_back(matrix[minR][j]);
                count++;
            }
            minR++;
            for(int i=minR;i<=maxR && count<tne;i++){
                v.push_back(matrix[i][maxC]);
                count++;
            }
            maxC--;
            for(int j=maxC;j>=minC && count<tne;j--){
                v.push_back(matrix[maxR][j]);
                count++;
            }
            maxR--;
            for(int i=maxR;i>=minR && count<tne;i--){
                v.push_back(matrix[i][minC]);
                count++;
            }
            minC++;
        }
        return v;
    }
};