class Solution {
public:
    bool isPalindrome(string s) {
        // bool flag = true;
        int n = s.length();
        int i=0,j;
        string ans = "";
        while(i<n){
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57)) {
                if(s[i]>=65 && s[i]<=90)
                    ans += (char)(s[i]+32);
                else ans += s[i];
            }
            i++;
        }
        i = 0,j = ans.length()-1;
        while(i<=j){
            if(ans[i]!=ans[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};