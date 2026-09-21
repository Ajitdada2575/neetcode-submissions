class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1])  continue;

            int l=i+1,r=n-1;
            while(l<=r){
            int sum=nums[i]+nums[r]+nums[l];
            if(sum==0){
                ans.push_back({nums[i],nums[l],nums[r]});
                int c1=nums[l],c2=nums[r];
                while(l<r&&nums[r]==c2) r--;
                while(l<r&&nums[l]==c1) l++;
            }
            else if(sum<0) {
                l++;
            }
            else{
                r--;
            }
            }

        }
        return ans;
    }
};
