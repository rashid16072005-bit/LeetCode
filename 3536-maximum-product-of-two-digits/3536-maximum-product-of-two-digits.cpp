class Solution {
public:
    int maxProduct(int n) {
        // vector<int> v;
        // while(n){
        //     // int rem = n%10;
        //     v.push_back(n%10);
        //     n /= 10;
        // }
        // sort(v.begin(),v.end());
        // return v[v.size()-1]*v[v.size()-2];

        string s = to_string(n);
        sort(s.begin() , s.end());
        int maxProduct = (s[s.length()-1]-'0')*(s[s.length()-2]-'0');
        return maxProduct;
    }
};