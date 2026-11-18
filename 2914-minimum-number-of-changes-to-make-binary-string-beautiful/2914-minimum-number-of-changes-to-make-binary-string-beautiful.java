class Solution {
    public int minChanges(String s) {
        int len = s.length();
        int count = 0;
        for (int i = 0; i < len; i += 2) {
            char curr1 = s.charAt(i);
            char curr2 = s.charAt(i + 1);
            if (curr1 != curr2)
                count++;
        }
        return count;
    }
}