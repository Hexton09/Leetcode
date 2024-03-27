class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        // Get the size of the input array
        int n = nums.size();
        
        // If k is 0 or 1, no subarray product can be less than or equal to it, return 0
        if(k == 0 || k == 1) {
            return 0;
        }

        // Initialize variables
        long long p = 1;    // Store the product of elements in the current subarray
        int start = 0;      // Start index of the current subarray
        int count = 0;      // Count of subarrays with product less than k

        // Iterate through each element of the array
        for (int end = 0; end < n; end++) {
            // Calculate product of elements in the current subarray
            p *= nums[end];
            
            // Adjust the subarray if the product becomes greater than or equal to k
            while (start <= end && p >= k) {
                p /= nums[start];   // Divide by the element at start index
                start++;            // Move the start of the subarray forward
            }
            
            // Count subarrays ending at index 'end' with product less than k
            count += (end - start + 1);
        }

        // Return the count of subarrays with product less than k
        return count;
    }
};
