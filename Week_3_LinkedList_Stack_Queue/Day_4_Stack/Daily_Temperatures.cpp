// Daily_Temperatures
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        
        int n = T.size();
        vector<int> ans(n, 0);   // default 0 for no warmer day
        stack<int> st;           // stores indices

        for(int i = 0; i < n; i++) {
            
            // If current temperature is warmer than stack top
            while(!st.empty() && T[i] > T[st.top()]) {
                
                int prevIndex = st.top();
                st.pop();
                
                // distance between current day and previous day
                ans[prevIndex] = i - prevIndex;
            }
            
            // push current index into stack
            st.push(i);
        }

        return ans;
    }
};