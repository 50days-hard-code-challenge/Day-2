class Solution {
    public int[] rearrangeArray(int[] nums) {
        // create an array 
        // due to it, Space Complexity is O(N) and Time Complexity = O(N)
        int[] arr = new int[nums.length];
        int evenIndex = 0; 
        int oddIndex  = 1;
        for(int i = 0; i<nums.length; i++){
            // to check the either number is positive or negative
            if(nums[i]>0){
                arr[evenIndex] = nums[i];
                evenIndex = evenIndex + 2;
            }
            else{
                arr[oddIndex] = nums[i];
                oddIndex = oddIndex + 2;
            }
        }
        return arr;
    }
}
