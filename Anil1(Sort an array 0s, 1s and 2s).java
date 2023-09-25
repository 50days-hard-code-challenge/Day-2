class Solution {
    public void sortColors(int[] nums) {
        int countZero = 0;
        int countOne = 0; 
        int countTwo = 0; 
        for(int i = 0; i<nums.length; i++){
            if(nums[i] == 0){
                countZero++;
            }
            else if(nums[i] == 1){
                countOne++;
            }
            else{
                countTwo++;
            }
        }
        // Sort the array and put it at correct Position
        for(int i = 0; i<countZero; i++){
            nums[i] = 0;
        }
        for(int i = countZero; i<countZero + countOne; i++){
            nums[i] = 1; 
        }
        int n = countZero + countOne + countTwo;
        for(int i = countZero+countOne; i<n; i++){
            nums[i] = 2;
        }
    }
}

