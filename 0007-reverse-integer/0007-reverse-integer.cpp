class Solution {
public:
    int reverse(int x) {
        // int num = x;
        double rev = 0,rem;
        int temp = x;
        while(temp!=0)
        {
            if(temp<0) rem = -(temp%10);
            else rem = temp%10;
            rev = rev * 10 + rem;
            temp/=10;
        }
        if(rev> 2147483647 || rev<-2147483648) return 0; 
        if(x<0) return rev - 2*rev;
        return rev;
    }
};