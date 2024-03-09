class Solution {
public:

    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int ans=-1;

        for(int i=0;i<nums1.size();i++)
        {
            int s=0;
            int e=nums2.size()-1,mid;
            while(s<=e)
            {
                mid=(s+e)/2;
                if(nums2[mid]==nums1[i])
                {
                    ans=nums2[mid];
                    break;
                }
                else if(nums2[mid]>nums1[i])
                {
                    e=mid-1;
                }
                else
                {
                    s=mid+1;
                }
            }

            if(ans!=-1)
            {
                break;
            }
        }
        return ans;
    }
};
