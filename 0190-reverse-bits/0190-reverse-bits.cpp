class Solution {
public:
    int reverseBits(int n) {
        string res = "";
        while(n!=0)
        {
            if(n%2==0) res = '0' + res;
            else res = '1' + res;
            n /= 2;
        }
        int len = res.size(); 
        if(len<32){
            for(int i=1;i<=32-len;i++){
                res = '0' + res;
            }
        }
        len = res.size();
        reverse(res.begin(),res.end());
        // long long dec = 0;
        long long result = 0;
        for(int i=len-1;i>=0;i--)
        {
            char ch = res[i];
            int num = (int)ch - 48;
            result += num*(1 << (len-i-1));
        }
        return result;
    }
};