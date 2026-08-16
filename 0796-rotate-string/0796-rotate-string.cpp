class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        if(n!=goal.length()) return false;
        for(int i=0;i<n;i++){
            s.push_back(s[0]);
            s.erase(0,1);
            if(s==goal) return true;
        }
        return false;
    }
};