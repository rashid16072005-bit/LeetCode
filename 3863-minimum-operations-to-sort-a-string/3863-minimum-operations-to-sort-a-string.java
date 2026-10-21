class Solution {
    public int minOperations(String s) {
        int n = s.length();
        boolean isSorted = true;
        for (int i = 0; i < n-1; i++) {
            if (s.charAt(i) > s.charAt(i + 1)) {
                isSorted = false;
                break;
            }
        }
        if (isSorted) return 0;
        if (n == 2) return -1;
        char min = s.charAt(0);
        char max = s.charAt(0);
        for (int i = 0; i < n; i++) {
            char curr = s.charAt(i);
            if (curr < min) min = curr;
            if (curr > max) max = curr;
        }
        if (s.charAt(0) == min || s.charAt(n - 1) == max) return 1;
        for (int i = 1; i < n - 1; i++) {
            char curr = s.charAt(i);
            if (curr == min || curr == max) return 2;
        }
        return 3;
    }
}