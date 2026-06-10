// Implement_strStr
class Solution {
public:
    int strStr(string haystack, string needle) {
      
        // if not found → returns string::npos
        int index = haystack.find(needle);  //It searches for the first occurrence of needle inside haystack.
                                           //If found → returns the starting index
        // if not found, return -1        //If not found → returns a special value: string::npos
        if (index == string::npos) return -1;  //string::npos is a special value in C++
                                              //It means 👉 "not found"
        return index;
    }
};