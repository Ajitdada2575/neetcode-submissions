class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {

        for(int i=0;i<n.size()-1;i++){
                 if(n[i]+n[i+1]==t){
                    return {i,i+1};
                 }
        }
        return {};
    }
};
