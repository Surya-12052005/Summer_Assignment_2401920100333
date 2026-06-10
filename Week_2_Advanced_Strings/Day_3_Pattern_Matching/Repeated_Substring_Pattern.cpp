// Repeated_Substring_Pattern
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string ss = s + s;    // Create a new string by concatenating s with itself
        return ss.substr(1, ss.length() - 2).find(s) != string::npos;  
    }                                   //   // Remove first and last character from ss
                                          // Then check if original string s exists inside it
};


/*Remove First and Last Character
ss.substr(1, ss.length() - 2)
substr(start, length) creates a new string.*/


/*  .find(s)  : Check whether original string s exists inside "bababa" */

/*  string::npos means: "Not Found" */