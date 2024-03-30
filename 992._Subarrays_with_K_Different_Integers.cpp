class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
        int i=0;
        int j=0;
        int i_big=0;
        int n=nums.size();

        int result=0;

        while(j<n)
        {
            mp[nums[j]]++;

            while(mp.size()>k)
            {
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                {
                    mp.erase(nums[i]);
                }
                i++;
                i_big=i;
            }

            while(mp[nums[i]] > 1)
            {
                mp[nums[i]]--;
                i++;
            }

            if(mp.size()==k)
            {
                result +=(1 + i - i_big);
            }
            j++;
        }
        return result;
        
    }
};
