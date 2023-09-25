class Solution {
public:

    int missingNumber(vector<int>& nums) {
       // sort(nums.begin(),nums.end());
      int l=nums.size(),
      ans=l;

        for(int i=0;i<l;i++)

        ans=ans^i^nums[i];
        
        return ans;
        
    }
};
