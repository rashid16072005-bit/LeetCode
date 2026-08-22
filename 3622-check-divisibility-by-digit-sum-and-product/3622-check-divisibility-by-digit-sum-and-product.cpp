class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0,prod = 1;
        int num = n;
        while(num!=0){
            int rem = num%10;
            sum += rem;
            prod *= rem;
            num /= 10;
        }
        int res = sum + prod;
        if(n%res==0) return true;
        return false;
    }
};