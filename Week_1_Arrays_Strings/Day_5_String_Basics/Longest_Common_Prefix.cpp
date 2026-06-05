// Longest_Common_Prefix
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        // Step 1: If empty input
        if(strs.empty()) return "";
        
        // Step 2: Traverse characters of first string
        for(int i = 0; i < strs[0].length(); i++) {
            
            char ch = strs[0][i];  // current character
            
            // Step 3: Compare with all other strings
            for(int j = 1; j < strs.size(); j++) {
                
                // If index out of bound OR mismatch
                if(i >= strs[j].length() || strs[j][i] != ch) {
                    
                    // Return prefix till previous index
                    return strs[0].substr(0, i);
                }
            }
        }
        
        // Step 4: If all matched → return full first string
        return strs[0];
    }
};