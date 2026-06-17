class Solution {
public:
    bool checkPerfectNumber(int num)
    {
        if(num==1) return false;
        int sum = 0; 
        // M-I Brute Force
        // for(int i=1;i<num;i++)
        // {
        //     if(num%i==0)
        //     {
        //         sum += i;
        //     }
        // }

        // M-II Optimised
        // for(int i=2;i>1;i--)
        // {
        //     if(num%i==0)
        //     {
        //         sum += num/i;
        //     }
        // }
        for(int i=2;i<=sqrt(num);i++)
        {
            if(num%i==0)
            {
                sum += i;
                sum += num/i;
            }
        }
        sum += 1;
        if(sum==num) return true;
        else return false;
    }
};