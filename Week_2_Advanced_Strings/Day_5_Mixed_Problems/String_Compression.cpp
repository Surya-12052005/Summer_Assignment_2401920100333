// String_Compression
class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0, count = 1;
        int n = chars.size();
        
        for (int read = 0; read < n; ++read) {
            // Check if we reached the end of a group of repeating characters
            if (read + 1 == n || chars[read] != chars[read + 1]) {
                // 1. Write the character itself
                chars[write++] = chars[read];
                
                // 2. If the character repeated, write its frequency digits
                if (count > 1) {
                    for (char digit : to_string(count)) {
                        chars[write++] = digit;
                    }
                }
                // Reset count for the next group
                count = 1; 
            } else {
                // Same character continues, increment count
                count++; 
            }
        }
        // The total length of the compressed string
        return write;
    }
};