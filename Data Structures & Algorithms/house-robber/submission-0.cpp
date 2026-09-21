class Solution {
public:

    int solve(vector<int>& nums,int n){
        if(n==0) return nums[0];
        int take=solve(nums,n-1);
        int nt=INT_MIN;
        if(n>1){
            nt=nums[n]+solve(nums,n-2);
        }
        return max(take,nt);

    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        return solve(nums,n-1);
    }
};
