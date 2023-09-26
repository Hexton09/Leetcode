class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int e=nums.size()-1;
        int s=0,mid;

        while(s<=e)
        {
            mid=(s+e)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }

       return s; 
    }
};
