class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.size()==1 && digits[0]==9) return {1,0};
        int n = digits.size();
        int sum1 = 0,sum2=n*9;
        if(digits[n-1]!=9) {
            digits[n-1] = digits[n-1] + 1;
            return digits;
        }
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            sum1 += digits[i];
        }
        if(sum1==sum2){
            vector<int> v(n+1,0);
            v[0] = 1;
            return v;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]==9) digits[i] = 0;
            else {
                digits[i]+=1;break;
            } 
        }
        return digits;
    }
};