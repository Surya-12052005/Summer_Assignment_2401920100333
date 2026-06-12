// Longest_Palindromic_Substring
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string res = "";

        for(int i = 0; i < n; i++) {

            // 🔹 1. Odd length palindrome (center = i)
            int left = i, right = i;

            while(left >= 0 && right < n && s[left] == s[right]) {
                // Update result if longer palindrome found
                if(right - left + 1 > res.size()) {    //gives length of current substring
                    res = s.substr(left, right - left + 1);  //Extracts substring from index left of given length
                }
                left--;
                right++;
            }

            // 🔹 2. Even length palindrome (center = i, i+1)
            left = i;
            right = i + 1;

            while(left >= 0 && right < n && s[left] == s[right]) {
                if(right - left + 1 > res.size()) {
                    res = s.substr(left, right - left + 1);
                }
                left--;
                right++;
            }
        }

        return res;
    }
};