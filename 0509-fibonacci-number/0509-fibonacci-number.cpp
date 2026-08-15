class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        // M-I (using recursion)
        // if(n==0) return 0;
        // if(n==1) return 1;
        // return fib(n-1) + fib(n-2);

        // M-II (using Loop & Array)
        int n1 = 0,n2 = 1;
        int res = 0;
        for(int i=2;i<=n;i++){
            res = n1 + n2;
            n1 = n2;
            n2 = res;
        }
        return res;
    }
};