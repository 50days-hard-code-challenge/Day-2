class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size()-1;
        int ans = 0;
        int a =0;

        for (int i = 0;i<=n ; i++){
            

            if(nums[i]==1){
                a++;
               ans= max(a,ans);

            }
            else{
                a=0;
                continue;
            }

        }
        return ans;
        
    }
};
