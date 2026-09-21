class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=1,maxi=0;
        for(int i:nums){
            ans+=i;
            ans*=i;
            maxi=max(ans,maxi);
        }
        return maxi;
    }
};