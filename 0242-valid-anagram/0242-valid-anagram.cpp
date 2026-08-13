class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t) return true;
        // return false;
        
        // Using Hashmap
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> m1;
        // unordered_map<char,int> m2;
        for(int i=0;i<s.length();i++){
            m1[s[i]]++;
            //m2[t[i]]++;
        }
        for(int i=0;i<t.length();i++){
            char ch = t[i];
            if(m1.find(ch)!=m1.end()){
                m1[ch]--;
                if(m1[ch]==0) m1.erase(ch);
            }
            else return false;
        }
        if(m1.size()>0) return false;
        return true;
    }
};