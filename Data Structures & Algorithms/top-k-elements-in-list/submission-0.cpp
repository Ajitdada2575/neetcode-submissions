class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int s:nums){
            mp[s]++;
        }
        vector<pair<int,int>> p;
        for(auto [n,count]:mp){
            p.push_back({count,n});
        }
        sort(p.rbegin(),p.rend());
        vector<int> ans;
        int i=0;
        for(auto [count,n]:p){
            
            if(i>=k){
                break;
            }
            ans.push_back(n);
           i++;
        }
        return ans;
    }
};
