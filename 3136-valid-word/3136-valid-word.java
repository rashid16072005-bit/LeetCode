class Solution {
    public boolean isValid(String word) {
        int n = word.length();
        if(n<3) return false;
        boolean vowel = false;
        boolean consonent = false;
        for(int i=0;i<n;i++){
            char ch=word.charAt(i);
            if(ch>=48 && ch<=57){
                continue;
            }
            else if((word.charAt(i)>='a' && word.charAt(i)<='z') || (word.charAt(i)>='A' && word.charAt(i)<='Z')){
                if(ch=='a' || ch=='e'|| ch=='i' || ch=='o' || ch=='u' ||  ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                    vowel = true;
                }
                else consonent = true;
            }
            else return false;
        }
        // if(vowel==false || consonent==false) return false;
        return (vowel && consonent);
    }
}