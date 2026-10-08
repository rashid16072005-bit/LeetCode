class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        stack<char> st;
        string res = "";
        st.push(s[0]);
        for(int i=1;i<n;i++){
            if(s[i]=='('){
                if(!st.empty() && st.top()=='(') {
                    res += s[i];
                    st.push(s[i]);
                }
                else st.push(s[i]);

            }
            else if(st.size()>0){
                if(st.size()>1) res += s[i];
                st.pop();
            }    
        }
        return res;
    }
};