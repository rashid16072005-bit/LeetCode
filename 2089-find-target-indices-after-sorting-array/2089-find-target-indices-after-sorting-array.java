class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        int n = nums.length;
        Arrays.sort(nums);
        List<Integer> l = new ArrayList<>();
        int lo=0,hi=n-1,mid;
        for(int i=0;i<n;i++){
            if(nums[i]>target) break;
            else if(nums[i]==target) l.add(i);
        }
        return l;

    }
}