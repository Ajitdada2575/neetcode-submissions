class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mini=INT_MIN,ans=p[0];
        int n=p.size();
        for(int i=1;i<n;i++){
            mini=max(mini,p[i]-ans);
            ans=min(ans,p[i]);
        }
        if(mini<0) return 0;
        return mini;
    }
};
