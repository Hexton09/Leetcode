class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        long max = INT_MIN, maxindex,secondmax;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>max)
            {
                secondmax=max;
                max=nums[i];
                maxindex=i;
            }
            else if(nums[i]>secondmax)
            {
                secondmax=nums[i];
            }
        }

        if(max>=2*secondmax)
        {
            return maxindex;
        }
        else
        {
            return -1;
        }
    }
};
