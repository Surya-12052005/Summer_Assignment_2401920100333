// Maximum_Subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxSum = nums[0];   // Stores the final maximum subarray sum
        int currSum = 0;        // Stores current running sum
        
        for(int i = 0; i < nums.size(); i++) {
            
            // Add current element to running sum
            currSum += nums[i];
            
            // Update maximum sum if current sum is greater
            maxSum = max(maxSum, currSum);
            
            // If running sum becomes negative,
            // reset it to 0 because it will not help in future
            if(currSum < 0) {
                currSum = 0;
            }
        }
        
        return maxSum;
    }
};