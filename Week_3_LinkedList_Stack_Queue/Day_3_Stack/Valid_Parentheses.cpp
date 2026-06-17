// Valid_Parentheses
class Solution {
public:
    bool isValid(string s) { //stack → a data structure (LIFO = Last In, First Out)
        stack<char> st;     //<char> → it will store characters only (like (, {, [)
                           //st is a variable to store parentheses.
        for (char c : s) {

            // Step 1: Push opening brackets
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else {
                // Step 2: If stack is empty → no matching opening
                if (st.empty()) return false;

                char top = st.top();  
                st.pop();  ////st.top() looks at the most recent opening bracket that was pushed onto the stack and stores it in a variable named top

                // Step 3: Check matching pair
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                } 
                //if c is ) but top is not (, that's an invalid sequence (like ( ]). If any of these mismatched conditions are true, the function immediately stops and returns false.
            }
        }

        // Step 4: Stack should be empty if valid
        return st.empty();
    }
};