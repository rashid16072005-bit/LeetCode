class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        if(high<11) return 0;
        
        int count = 0;
        for(int i=low;i<=high;i++)
        {
            int num = i;
            int sum1 = 0,sum2 = 0;
            string str = to_string(num);
            int n = str.size();
            if(n%2!=0) continue;
            for(int j=1;j<=n;j++)
            {
                int l = num%10;
                if(j<=n/2){
                    sum1 += l;
                }
                else 
                sum2 += l;
                num /= 10;
                
                
            }
            if(sum1==sum2)
            count++;
        }
        return count;
    }
};