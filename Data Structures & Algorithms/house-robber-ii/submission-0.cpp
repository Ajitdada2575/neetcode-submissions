class Solution {
public:
    vector<int> dp;
    int solve(vector<int>& nums,int n){
         if(n<0) return 0;
         if(n==0) return dp[0];
       
        if(dp[n]!=-1) return dp[n];
        int take=nums[n];
        if(n>1){
            take=nums[n]+solve(nums,n-2);
        }
        int nottake=solve(nums,n-1);
        return dp[n]=max(take,nottake);
    }
    int rob(vector<int>& nums) {
        dp.assign(nums.size()+1,-1);
        return solve(nums,nums.size()-1);
    }
};
