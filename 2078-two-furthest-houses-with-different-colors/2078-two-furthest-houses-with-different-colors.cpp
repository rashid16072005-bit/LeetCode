class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int max = INT_MIN;
        for (int i=0;i<colors.size()-1;i++) {
            for (int j=i+1;j<colors.size();j++) {
                if(colors[i]!=colors[j]){
                    if(max < abs(i-j))
                    max = abs(i-j);
                }
            }
        }
        return max;
    }
};