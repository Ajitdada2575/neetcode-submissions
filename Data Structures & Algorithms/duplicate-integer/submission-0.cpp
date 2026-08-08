#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& n) {
        set<int> s(n.begin(),n.end());
        if(s.size()==n.size()) return false;
        else {
            return true;
        }
    }
};