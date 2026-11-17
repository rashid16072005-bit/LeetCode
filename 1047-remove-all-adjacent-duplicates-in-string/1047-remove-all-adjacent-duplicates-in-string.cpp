class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.length();
        stack<char> st;
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(st.top()==s[i]) st.pop();
            else st.push(s[i]);
        }
        string str = "";
        while(!st.empty()){
            str += st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};