class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.length();
        string res;
        stack<char> temp;
        for(int i=0;i<n;i++){
            if(s[i]==')'){
                res = "";
                while(temp.top()!='(' && temp.size()>0)
                {
                    res += temp.top();
                    temp.pop();
                }
                temp.pop();
                for(int i=0;i<res.length();i++){
                    temp.push(res[i]);
                }
            }
            else{
                temp.push(s[i]);
            }
        }
        res = "";
        while(temp.size()>0){
            res += temp.top();
            temp.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};