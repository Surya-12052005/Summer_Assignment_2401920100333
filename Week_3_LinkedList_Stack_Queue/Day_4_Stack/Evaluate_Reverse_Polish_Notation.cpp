// Evaluate_Reverse_Polish_Notation
class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> st;

        for (int i = 0; i < tokens.size(); i++) {

            string token = tokens[i];

            if (token == "+" || token == "-" ||
                token == "*" || token == "/") {
                                                  //  Stack = [4, 2]
                int num2 = st.top(); //top() returns the element at the top of the stack.//num2 = 2
                st.pop();            //This removes the top element.  //Stack = [4]

                int num1 = st.top();
                st.pop();

                if (token == "+")
                    st.push(num1 + num2);

                else if (token == "-")
                    st.push(num1 - num2);

                else if (token == "*")
                    st.push(num1 * num2);

                else
                    st.push(num1 / num2);
            }
            else {                                                   
                st.push(stoi(token));  //It converts a string into an integer.
            }                         // string token = "123"; -- stoi(token)  --  123
        }                            //push() inserts an element into the stack.

        return st.top();
    }
};