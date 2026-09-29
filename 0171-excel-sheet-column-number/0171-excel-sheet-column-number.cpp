class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long res = 0;
        long long pow=1;
        for(int i=columnTitle.length()-1;i>=0;i--){
            res += (columnTitle[i] - 64)* pow;
            pow *= 26;
        }
        return (int)res;
    }
};