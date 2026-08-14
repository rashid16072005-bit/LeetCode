class Solution {
public:
    string makeFancyString(string s) {
        int n = s.length();
        if(n<3) return s;
        string ans = "";
        for(int i=0;i<s.length()-2;i++){
            if(s[i]!=s[i+1] || s[i]!=s[i+2]) ans += s[i];
        }
        ans += s[n-2];
        ans += s[n-1];
        return ans;
    }
};