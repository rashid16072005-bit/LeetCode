class Solution {
    public String[] createGrid(int m, int n) {
        String[] arr = new String[m];
        // arr[0][0] = ".";
        // arr[0][1] = ".";
        // arr[0][2] = ".";
        // arr[1][0] = "#";
        // arr[1][1] = "#";
        // arr[1][2] = ".";
        
        for(int i=0;i<m;i++){
            StringBuilder str = new StringBuilder("");
            for(int j=0;j<n;j++){
                if(i==0 || j==n-1) str.append(".");
                else str.append("#");
            }
            arr[i] = str.toString();
        }
        
        return arr;
    }
}