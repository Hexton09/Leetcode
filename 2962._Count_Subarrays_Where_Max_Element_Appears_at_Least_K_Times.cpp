
class Solution {
public:
    // Function to find the maximum element in the vector
    int maxfunction(vector<int>& arr) {
        int ans = 0; // Initialize the maximum value as 0
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > ans) { // If current element is greater than the current max
                ans = arr[i]; // Update the max
            }
        }
        return ans; // Return the maximum value
    }
    
    // Function to count subarrays with at least k occurrences of the maximum element
    long long countSubarrays(vector<int>& nums, int k) {
        int max_no = maxfunction(nums); // Find the maximum element in nums
        long long ans = 0; // Initialize the answer
        int count = 0; // Initialize the count of maximum element occurrences
        int i = 0, j = 0; // Pointers for the sliding window
        int n = nums.size(); // Size of the input vector
        
        // Loop through the array using sliding window technique
        while(j < n) {
            // Increment count if the current element is the maximum element
            if(nums[j] == max_no) {
                count++;
            }
            // If count is greater than or equal to k, adjust the window and count the subarrays
            while(count >= k) {
                ans += n - j; // Increment answer by the size of the window
                // Move the left pointer and update count if the element at left pointer is maximum
                if(nums[i] == max_no) {
                    count--;
                }
                i++; // Move the left pointer to shrink the window
            }
            j++; // Move the right pointer to expand the window
        }

        return ans; // Return the total count of subarrays satisfying the condition
    }
};
