
class Solution {
public:
    int findMaxLength(std::vector<int>& nums) { 
        std::unordered_map<int, int> mymap;
        int sum = 0;
        int longest_subarray = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += (nums[i] == 0 ? -1 : 1);
            if (sum == 0) {
                longest_subarray = i + 1;
            } else if (mymap.find(sum) != mymap.end()) {
                longest_subarray = std::max(longest_subarray, i - mymap[sum]);
            } else {
                mymap[sum] = i;
            }
        }
        return longest_subarray;
    }
};
