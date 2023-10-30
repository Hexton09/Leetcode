class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;

        for(int i=0;i<accounts.size();i++)
        {
            int ans=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                ans=ans+ accounts[i][j];
            }
            if(ans>max)
            {
                max=ans;
            }
        
        }
        return max;
        
    }
};
