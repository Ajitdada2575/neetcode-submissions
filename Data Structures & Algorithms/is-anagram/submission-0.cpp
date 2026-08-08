class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a(26,0),b(26,0);

        int n=s.size(),m=t.size();
        if(n!=m) return false;

        for(int i=0;i<n;i++) a[s[i]-'a']++;
        for(int i=0;i<m;i++) b[t[i]-'a']++;

        if(a!=b) return false;

        else{
            return true;
        }

    }
};
