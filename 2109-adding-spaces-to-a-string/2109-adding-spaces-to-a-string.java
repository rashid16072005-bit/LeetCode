class Solution {
    public String addSpaces(String s, int[] spaces) {
        StringBuilder sb = new StringBuilder("");
        int n = s.length(),len = spaces.length;
        int idx = 0;
        for(int i=0;i<n;i++){
            if(spaces[idx]==i){
                sb.append(" ");
                if(idx!=len-1)  idx++;
            }
            sb.append(s.charAt(i));
        }
        return sb.toString();
    }
}