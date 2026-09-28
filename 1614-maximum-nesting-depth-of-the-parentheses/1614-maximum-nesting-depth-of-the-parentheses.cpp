class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        // stack<char> s;
        int cnt = 0,maxCnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') {cnt++;
            maxCnt = max(maxCnt,cnt);}
            else if(s[i]==')') cnt--;
        }
        return maxCnt;
    }
};