class Solution {
public:
    // int solve(int num){
    //     int res = 0;
    //     while(num!=0){
    //         int r = num%10;
    //         res += r;
    //         num /= 10;
    //     }
    //     return res;
    // }
    int addDigits(int num) {
        // if(num<10) return num;
        // //int res = 0;
        // while(num>9){
        //     num = solve(num);
        // }
        // return num;

        if (num == 0)
            return 0;
        else
            return 1 + (num - 1) % 9;
    }
};