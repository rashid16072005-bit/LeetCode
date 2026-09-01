class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int h = 0,w = 0;
        int M_Water = 0;
        while(i<j){
            h = min(height[i],height[j]);
            w = j- i;
            int water = h * w;
            M_Water = max(M_Water,water);
            // if(height[i]==height[j]) i++;
             if(height[i]<height[j]) i++;
            else j--;

        }
        return M_Water;
    }
};