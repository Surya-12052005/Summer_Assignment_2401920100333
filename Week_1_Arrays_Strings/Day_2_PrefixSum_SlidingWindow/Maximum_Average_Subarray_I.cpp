// Maximum_Average_Subarray_I
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        long long sum = 0;

        // First window sum
        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }

        long long maxSum = sum;     //Initialize maximum sum.

        // Slide the window
        for(int i = k; i < nums.size(); i++) {   //Because the first k elements are already used to calculate the first window sum.

            sum = sum - nums[i - k] + nums[i];  //new sum = old sum - leaving element + entering element

            maxSum = max(maxSum, sum);
        }

        return (double)maxSum / k;
    }
};