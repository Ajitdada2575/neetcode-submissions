class Solution {
public:
      vector<int> dp;
    int solve(vector<int>& nums,int n){
        if(n==0) return nums[0];
        int take=solve(nums,n-1);
        int nt=INT_MIN;
        if(dp[n]!=-1) return dp[n];
        if(n>1){
            nt=nums[n]+solve(nums,n-2);
        }
        return dp[n]=max(take,nt);

    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        dp.assign(n+1,-1);
        return solve(nums,n-1);
    }
};
