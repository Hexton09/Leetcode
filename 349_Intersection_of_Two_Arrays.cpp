class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        sort(nums2.begin(),nums2.end());

        for(int i=0;i<nums1.size();i++)
        {
        if (std::binary_search (nums2.begin(), nums2.end(), nums1[i]))
        {
            ans.push_back(nums1[i]);
        }
        }
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }

};
