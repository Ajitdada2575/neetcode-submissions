class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()<2) return true;
        int i=0,j=s.size()-1;
        while(i<=j){
            while(!isalpha(s[i])){
                i++;
            }
            while(!isalpha(s[j])){
                j--;
            }
            char a=tolower(s[i]),b=tolower(s[j]);
            if(a!=b) return false;
            i++;
            j--;
        }
        return true;
    }
};
