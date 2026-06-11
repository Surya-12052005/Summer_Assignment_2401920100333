// Reverse_Words_In_A_String_III
class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
 
        for (int i = 0; i <= s.size(); i++) {       // Traverse the string
            if (i == s.size() || s[i] == ' ') {     // If space is found OR end of string is reached
                reverse(s.begin() + start, s.begin() + i);   // Reverse the current word
                start = i + 1;       // Move start to the next word
            }
        }

        return s;         // Return modified string
    }
};

//We use <= instead of < so that we can also process the last word when i == s.size().

/*Check for word ending
A word ends when:
We reach a space ' '
OR we reach the end of the string*/

/*. Reverse the current word

ex: "hello world"
reverse(s.begin()+0, s.begin()+5);
"olleh world"*/

/*Move to next word
start = i + 1;
start becomes the index after the space, i.e., the beginning of the next word.*/