class Solution {
public:
long long countSubarrays(vector<int>& nums, int mink, int mak) {
    long long ans = 0;
    int minkPosition = -1;
    int maxkPosition = -1;
    int culpritIdx = -1; 
    for(int i = 0; i < nums.size(); i++) { 
        if (nums[i] < mink || nums[i] > mak) 
            culpritIdx = i; 
        if(nums[i] == mink)
            minkPosition = i;
        if (nums[i] == mak)
            maxkPosition = i;
        long long smaller = min(minkPosition, maxkPosition); 
        long long temp = smaller - culpritIdx; 
        ans += (temp <= 0) ? 0 : temp;
    }
    return ans; 
}


};
