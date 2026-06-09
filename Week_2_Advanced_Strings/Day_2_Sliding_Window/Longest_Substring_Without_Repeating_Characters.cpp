// Longest_Substring_Without_Repeating_Characters
class Solution {
public:
    int lengthOfLongestSubstring(string s) {// unordered_set-Helps check duplicates in O(1) time
        unordered_set<char> st;  // variable st-that stores unique characters
        int left = 0, maxLen = 0;  //  unordered_set-A data structure from C++ STL

        for (int right = 0; right < s.length(); right++) {
            // If duplicate found, remove from left
            while (st.find(s[right]) != st.end()) {  //s[right]- this is the current character.
                st.erase(s[left]);                  //st.find(s[right])-Checks if this character is already present in the set
                left++;                            //st.end() → if NOT found
            }                                     //!= st.end()-Means: character is found in the set

            // Add current character
            st.insert(s[right]);  //Add the current character into the set

            // Update max length
            maxLen = max(maxLen, right - left + 1);//Calculate current window size &Update maximum length
        }

        return maxLen;
    }
};