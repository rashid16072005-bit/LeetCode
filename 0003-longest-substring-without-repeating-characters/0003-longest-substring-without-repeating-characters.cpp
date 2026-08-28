class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,n=s.length();
        int maxLength = 0;
        set<int> Set;
        while(i<n){
            if(Set.find(s[i])!=Set.end()){
                Set.erase(s[j]);
                j++;
            }
            else{
                Set.insert(s[i]);
                maxLength = max(maxLength,i-j+1);
                i++;
            }
        }
        return maxLength;
    }
};