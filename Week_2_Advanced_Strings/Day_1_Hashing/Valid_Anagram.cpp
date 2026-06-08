// Valid_Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        
        sort(s.begin(), s.end());     //"cab" → "abc"
        sort(t.begin(), t.end());
        
        return s==t;            //If equal → true
    }
};