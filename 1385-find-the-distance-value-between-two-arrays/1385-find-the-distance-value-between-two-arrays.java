class Solution {
    public int findTheDistanceValue(int[] arr1, int[] arr2, int d) {
        int n = arr1.length;
        int m = arr2.length,count = 0;
        int flag;
        for(int i=0;i<n;i++){
            flag = 0;
            for(int j=0;j<m;j++){
                if(Math.abs(arr1[i]-arr2[j])<=d) {
                    flag = 1;
                    break;
                }
            }
            if(flag==0) count++;
        }
        return count;
    }
}