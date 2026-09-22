class Solution {
public:
    string reversePrefix(string s, int k) {
        int n = s.length();
        if(k==1) return s;
        if(k==n) {
            reverse(s.begin(),s.end());
            return s;
        }
        int i=0,j=k-1;
        while(i<=j){
            swap(s[i++],s[j--]);
        }
        return s;
    }
};