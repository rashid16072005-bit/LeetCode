class Solution {
public:
    long long countCommas(long long n) {
        long long res = 0;
        while(n>999){
            if(n<pow(10,6) && n>=pow(10,3)){
                res += n - (pow(10,3)-1);
                n = pow(10,3)-1;
            }
            else if(n<pow(10,9) && n>=pow(10,6)){
                res += 2*(n - pow(10,6)+1);
                n = pow(10,6)-1;
            }
            else if(n<pow(10,12) && n>=pow(10,9)){
                res += 3*(n - pow(10,9)+1);
                n = pow(10,9)-1;
            }
            else if(n<pow(10,15) && n>=pow(10,12)){
                res += 4*(n - pow(10,12)+1);
                n = pow(10,12)-1;
            }
            else {
                res += 5;
                n = pow(10,15)-1;
            }
        }
        return res;
    }
};