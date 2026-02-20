class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length()==1 && s[0]!=32) return s.length();
        int n = s.length();
        int idx = -1;
        for(int i=n-1;i>=0;i--){
            char ch = s[i];
            if(ch==32) continue;
            else {
               idx = i;
               break;
            }
        }
        if(idx==0) return 1;
        string str = "";
        // char ch = s[idx];
        // idx--;
        // str += ch;
        while(idx!=-1 && s[idx]!=32){
            char ch = s[idx];
            str += ch;
            idx--;
        }
        return str.length();
    }
};