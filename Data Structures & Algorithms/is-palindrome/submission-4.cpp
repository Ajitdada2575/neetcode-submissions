class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()<2) return true;
        int i=0,j=s.size()-1;
        while(i<j){
            while(i<j&&!isalpha(s[i])){
                i++;
            }
            while(j>i&&!isalpha(s[j])){
                j--;
            }
            char a=tolower(s[i]),b=tolower(s[j]);
            if(a!=b) return false;
            i++;
            j--;
        }
        if(i==j) return true;
        return true;
    }
};
