class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // Iterate through the elements of the vector
        for(int i = 0; i < nums.size(); i++) {
            // Check if the current element is non-positive or out of range
            if(nums[i] <= 0 || nums[i] > nums.size()) {
                // If so, skip to the next iteration
                continue;
            }
            // Check if the current element is already in its correct position
            else if(nums[i] == i + 1) {
                // If so, skip to the next iteration
                continue;
            }
            // Otherwise, swap the current element with the element at its correct position
            int index1 = i;
            int index2 = nums[i] - 1;
            // If the elements at index1 and index2 are the same, no need to swap
            if(nums[index1] == nums[index2]) {
                // Skip to the next iteration
                continue;
            } else {
                // Swap the elements
                swap(nums[index1], nums[index2]);
                // Decrement i to revisit the current index after the swap
                i--;
            }
        }
        // Iterate through the vector to find the first element not in its correct position
        for(int i = 0; i < nums.size(); i++) {
            // If an element is not in its correct position, return it (as the first missing positive)
            if(nums[i] != i + 1) {
                return i + 1;
            }
        }
        // If all positive integers up to nums.size() are present, return the next integer in sequence
        return nums.size() + 1;
    }
};
