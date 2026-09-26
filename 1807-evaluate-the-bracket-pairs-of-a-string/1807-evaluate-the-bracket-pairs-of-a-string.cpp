class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = s.length(),row = knowledge.size();
        int idx1 =-1,idx2=-1;
        map<string,string> m;
        string res = "";
        for(int i=0;i<row;i++){
            m[knowledge[i][0]] = knowledge[i][1];
        }
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                idx1 = i;
                while(s[i]!=')'){
                    idx2 = i;
                    i++;
                }
                if(m.find(s.substr(idx1+1,idx2-idx1))!=m.end()){
                    res += m[s.substr(idx1+1,idx2-idx1)];
                }
                else{
                    res += "?";
                }
            }
            else{
                res += s[i];
            }

        }
        return res;

    }
};