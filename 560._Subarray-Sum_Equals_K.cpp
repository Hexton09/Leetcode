class Solution {
public:
    int subarraySum(vector<int>& nums, int goal) {
        int count = 0;
        int prefixSum = 0;
        unordered_map<int, int> prefixSumCount;
        
        prefixSumCount[0] = 1; // Initialize prefix sum count with 0
        
        for (int num : nums) {
            prefixSum += num;
            count += prefixSumCount[prefixSum - goal];
            prefixSumCount[prefixSum]++;
        }
        
        return count;
        
        
    }
};
