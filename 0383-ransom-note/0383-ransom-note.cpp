class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r = ransomNote.size(),m = magazine.size();
        map<char,int> mp;
        for(int i=0;i<m;i++){
            mp[magazine[i]]++;
        }
        for(int i=0;i<r;i++){
            if(mp.find(ransomNote[i])!=mp.end()){
                mp[ransomNote[i]]--;
                if(mp[ransomNote[i]]==0) mp.erase(ransomNote[i]);
            }
            else return false;
        }
        
        return true;
    }
};