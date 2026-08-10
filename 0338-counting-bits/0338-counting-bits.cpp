class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v(n+1);
        v[0] = 0;
        for(int i=1;i<=n;i++){
            int count = 0;
            int temp = i;
            while(temp){
                temp = temp & temp -1;
                count++;
            }
            v[i] = count;
        }
        return v;
    }
};