class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>result;
        for(int i=0;i<nums.size();i++)
        {
            int index=abs(nums[i])-1;
            if(nums[index]<0)
            {
                result.push_back(index+1);
            }
            else
            {
                nums[index] *=-1;
            }
        }
        return result;
        
    }
};
