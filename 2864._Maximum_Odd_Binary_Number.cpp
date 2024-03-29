class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                count++;
                s[i]='0';
            }
        }
        if(count!=0)
        {
            s[n-1]='1';
            count--;
        }
        int j=0;
        while(count>0)
        {
            s[j]='1';
            j++;
            count--;
        }
        return s;
        
    }
};
