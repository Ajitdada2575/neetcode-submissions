class Solution {
public:
    vector<int> dp;
    int solve(vector<int>& nums,int n){
         if(n<0) return 0;
         if(n==0) return nums[0];
       
        if(dp[n]!=-1) return dp[n];
        int take=nums[n];
        if(n>1){
            take=nums[n]+solve(nums,n-2);
        }
        int nottake=solve(nums,n-1);
        return dp[n]=max(take,nottake);
    }
    int rob(vector<int>& nums) {
         int n=nums.size();
        if(n==1) return nums[0];

        dp.assign(n,-1);
        vector<int> n1(nums.begin(),nums.end()-1);
        int p1=solve(n1,n1.size()-1);

        dp.assign(n,-1);
        vector<int> n2(nums.begin()+1,nums.end());
        int p2=solve(n2,n2.size()-1);

        return max(p1,p2);
    }
};
