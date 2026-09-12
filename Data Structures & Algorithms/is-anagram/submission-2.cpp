class Solution {
public:
        bool isAnagram(string a, string b) {
    if(a.size() != b.size())
        return false;

    vector<int> freq(26, 0);

    for(char c : a)
        freq[c - 'a']++;

    for(char c : b)
        freq[c - 'a']--;

    for(int x : freq)
        if(x != 0)
            return false;

    return true;
}
};
