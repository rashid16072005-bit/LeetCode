class Solution {
public:
    int totalMoney(int n) {
        if(n<8) return n*(n+1)/2;
        int a = n/7;
        int rem = n%7;
        int res = 0;// a*(28);
        int i;
        for(i=1;i<=a;i++){
            for(int j=i;j<=6+i;j++){
                res += j;
            }
        }
        for(int k=i;k<=rem+i-1;k++){
            res += k;
        }
        // for(int i=1;i<a;i++){
        //     res -= i;
        // }
        // int b = n%7;
        // if(n%7!=0){
        //     for(int i=a+1;i<=a+b;i++){
        //         res += i;
        //     }
        // }
        return res;
    }
};