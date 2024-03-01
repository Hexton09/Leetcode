class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set; // Changed from set to unordered_set
        int max_length = 0, start = 0, end = 0;

        while (end < s.size()) { // Corrected the loop condition
            if (set.find(s[end]) == set.end()) {
                set.insert(s[end]);
                max_length = max(max_length, end - start + 1);
                end++;
            } else {
                set.erase(s[start]);
                start++;
            }
        }
        return max_length;

    }
};
