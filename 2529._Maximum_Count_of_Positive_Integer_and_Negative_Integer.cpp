class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int poscount=0,negcount=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                poscount++;
            }
            else if(nums[i]<0)
            {
                negcount++;
            }
        }
        return max(poscount,negcount); 
    }
};
