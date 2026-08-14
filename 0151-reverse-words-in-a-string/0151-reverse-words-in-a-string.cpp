class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        stringstream ss(s);
        string temp;
        vector<string> v;
        while(ss>>temp){
            v.push_back(temp);
        }
        for(int i=v.size()-1;i>=0;i--){
            if(i==0) ans += v[i];
            else ans += v[i] +" ";
        }
        return ans;
    }
};