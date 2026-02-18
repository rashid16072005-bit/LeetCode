class Solution {
public:
    bool hasAlternatingBits(int n) {
        string res = "";
        while(n!=0){
            if(n%2==0) res = '0' + res;
            else res = '1' + res;
            res /= 2;
        }
        int s = res.length();
        char ch = res[0];
        for(int i=1;i<s-1;i++){
            if(res[i]==ch) return false;
            ch = res[i];
        }
        return true;
    }
};