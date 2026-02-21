class Solution {
public:
    void sieve(vector<bool>& v){        
        int n = v.size()-1;
        for(int i=2;i<=sqrt(n);i++){
            for(int j=i*2;j<=n;j+=i){
                v[j] = 0;
            }
        }
        
    }
    int countPrimes(int n) {
        if(n<=2) return 0;
        int count = 0;
        vector<bool> v(n,1);
        v[0] = 0;
        v[1] = 0;
        sieve(v);
        for(int i=2;i<n;i++){
            if(v[i]==1) count++;
        }
        return count;
    }
};