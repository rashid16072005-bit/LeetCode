class Solution {
    public boolean isValid(String word) {
        int n = word.length();
        if(n<3) return false;
        boolean digit = false;
        boolean vowel = false;
        boolean consonent = false;
        for(int i=0;i<n;i++){
            if(word.charAt(i)>=48 && word.charAt(i)<=57){
                if(digit){
                    continue;
                }
                digit = true;
            }
            else if(word.charAt(i)=='a' || word.charAt(i)=='A' || word.charAt(i)=='e' || word.charAt(i)=='E' || word.charAt(i)=='i' || word.charAt(i)=='I' || word.charAt(i)=='o' || word.charAt(i)=='O' || word.charAt(i)=='u' || word.charAt(i)=='U'){
                if(vowel){
                    continue;
                }
                vowel = true;
            }
            else if((word.charAt(i)>='a' && word.charAt(i)<='z') || (word.charAt(i)>='A' && word.charAt(i)<='Z')) consonent = true;
            else return false;
        }
        if(vowel==false || consonent==false) return false;
        return (digit || (vowel && consonent));
    }
}