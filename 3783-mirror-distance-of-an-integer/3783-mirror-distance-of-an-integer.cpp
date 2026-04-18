class Solution {
public:
    int rev(int n){
        int rev = 0;
        while(n!=0){
            int r = n%10;
            rev = rev*10 + r;
            n/=10;
        }
        return rev;
    }
    int mirrorDistance(int n) {
        return abs(n - rev(n));
    }
};