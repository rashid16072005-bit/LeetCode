class Solution {
public:
    bool isPalindrome(int x) {
        // bool flag = false;
        // long long pal = 0;
        // long long num = x;
        //if(x<0) 
        // flag = false;
        //return false;
        
        // while(x!=0)
        // {
        //     int l = x%10;
        //     pal = pal*10 + l;
        //     x/=10;
        // }
        // if(num==pal)
        // {
        //     flag = true;
        // }
        // return flag;
        string str = to_string(x);
        int i=0,j=str.length()-1;
        while(i<j){
            if(str[i]!=str[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};