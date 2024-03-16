
class Solution {
public:
    int maxFrequencyElements(std::vector<int>& nums) {
        unordered_map<int, int> freqMap;
        
        // Count the frequency of each element
        for (int i = 0; i < nums.size(); ++i) {
            freqMap[nums[i]]++;
        }
        
        int maxFreq = 0;
        for (pair<const int, int>& pair : freqMap) {
            maxFreq = std::max(maxFreq, pair.second);
        }
        
        int count = 0;
        for (pair<const int, int>& pair : freqMap) {
            if (pair.second == maxFreq) {
                count += pair.second;
            }
        }
        
        return count;
    }
};
