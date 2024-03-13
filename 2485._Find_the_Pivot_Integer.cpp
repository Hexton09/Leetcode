class Solution {
public:
    int pivotInteger(int n) {
        // Calculate the total sum of integers from 1 to n
        int totalSum = (n * (n + 1)) / 2;
        
        int leftSum = 0; // Sum of integers to the left of the pivot
        int rightSum = totalSum; // Sum of integers to the right of the pivot
        
        // Iterate from 1 to n to find the pivot
        for (int pivot = 1; pivot <= n; ++pivot) {
            // Update leftSum and rightSum accordingly
            leftSum += pivot - 1;
            rightSum -= pivot;
            
            // If leftSum equals rightSum, pivot is found
            if (leftSum == rightSum) {
                return pivot;
            }
        }
        
        // If no pivot integer found, return -1
        return -1;
    }
};
