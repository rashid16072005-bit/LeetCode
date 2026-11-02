class Solution {
    public int minMoves2(int[] nums) {
        int n = nums.length;
        int moves = 0;
        Arrays.sort(nums);
        int mIdx = n/2,median = nums[mIdx];
        for (int i = 0; i < n; i++) {
            moves += Math.abs(median-nums[i]);
        }
        return moves;
    }
}