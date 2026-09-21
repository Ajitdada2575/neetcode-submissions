class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        int j=nums1.size()-1;
        sort(nums1.rbegin(),nums1.rend());
        while(j>0&&nums1[j]==0){
                nums1.pop_back();
                j--;
        }
        sort(nums1.begin(),nums1.end());
    }
};