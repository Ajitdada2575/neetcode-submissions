class Solution {
public:
    int longestConsecutive(vector<int>& a) {
         int n=a.size();
        if(n==0) return 0;
        int longest =1;
        unordered_set<int> st(a.begin(),a.end());
        for(auto x:st){
            if(st.find(x-1)==st.end()){
                int cnt=1;
                int it=x;
                while(st.find(it+1)!=st.end()){
                    it++;
                    cnt++;
                }
                longest=max(longest,cnt);
            }
        }
        return longest;
    }
};
