class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.size();
        while(i<=j){
            while(!isalnum(s[i])){
                i++;
            }
            while(!isalnum(s[j])){
                j--;
            }
            char a=tolower(s[i]),b=tolower(s[j]);
            if(a!=b){
                return false;
            }
i++;
j--;
            
        }
        return true;
    }
};
