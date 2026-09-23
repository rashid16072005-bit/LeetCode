class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char> s;
        int cnt = 0;
        for(int i=0;i<word.length();i++){
            s.insert(word[i]);
        }
        for(char i='a';i<='z';i++){
            char ch = char(i-32);
            if(s.find(i)!=s.end() && s.find(ch)!=s.end()) cnt++;
        }
        return cnt;
    }
};