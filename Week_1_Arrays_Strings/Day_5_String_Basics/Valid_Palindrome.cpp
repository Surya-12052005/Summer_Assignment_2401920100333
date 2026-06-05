// Valid_Palindrome
class Solution {
public:
    bool isPalindrome(string s) {

        // Step 1: Create a cleaned string
        // This will store only lowercase alphanumeric characters
        string clean = "";

        // Traverse each character in the input string
        for (char c : s) {

            // Check if the character is alphanumeric (letter or digit)
            if (isalnum(c)) {

                // Convert to lowercase and append to 'clean'
                clean += tolower(c);
            }
        }

        // Step 2: Create a reversed copy of the cleaned string
        string rev = clean;

        // Reverse the string from beginning to end
        reverse(rev.begin(), rev.end());

        // Step 3: Compare cleaned string with reversed string
        // If both are equal → it's a palindrome
        return clean == rev;
    }
};