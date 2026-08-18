class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];
        // string s = "";
        int idx = -1;
        for(int i=0;i<(min(first.size(),last.size()));i++)
        {
            if(first[i]==last[i])
            {
                // s += first[i];
                idx = i;
            }
            else return strs[0].substr(0,idx+1);
        }
        return strs[0].substr(0,idx+1);
    }
};