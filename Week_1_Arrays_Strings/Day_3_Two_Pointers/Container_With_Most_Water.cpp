// Container_With_Most_Water
class Solution {
public:
    int maxArea(vector<int>& height) {

        
        int left = 0;                   // Left pointer starts from beginning
        int right = height.size() - 1;     // Right pointer starts from end 
        int maxWater = 0;                 // Store the maximum water area found so far

        while (left < right) {

            int width = right - left;          // Width between the two lines

            int currentHeight = min(height[left], height[right]);    // Height is limited by the shorter line

            int currentArea = width * currentHeight;         // Water stored between current lines

            
            maxWater = max(maxWater, currentArea);       // Update maximum area if current area is larger

          
            if (height[left] < height[right]) {           // Move the pointer with smaller height
                                                       // because only that can potentially increase the area
                left++;
            }
            else {
                right--;
            }
        }

        return maxWater;
    }
};