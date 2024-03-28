#include <vector>
#include <unordered_map>

class Solution {
public:
    int maxSubarrayLength(std::vector<int>& nums, int k) {
        int res = 0; // Initialize variable to store the result
        std::unordered_map<int, int> count; // Initialize a hash map to store the count of distinct integers
        int l = 0; // Initialize the left pointer of the window

        // Iterate over the elements of the vector
        for (int r = 0; r < nums.size(); ++r) {
            count[nums[r]]++; // Increment the count of the current integer
            
            // Shrink the window from the left side if count of any integer exceeds k
            while (count[nums[r]] > k) {
                count[nums[l]]--; // Decrease the count of the integer at left pointer
                l++; // Move the left pointer to the right
            }
            
            // Calculate the length of the current subarray and update the result
            res = std::max(res, r - l + 1);
        }
        
        return res; // Return the maximum length of subarray satisfying the condition
    }
};
