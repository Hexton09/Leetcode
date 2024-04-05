class Solution {
public:
    string makeGood(string s) {
        string result="";

        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(!result.empty() && (result.back()+32 ==ch || result.back() -32 ==ch))
            {
                result.pop_back();
            }
            else{
                result.push_back(ch); 
            }
        }
        return result;
        
    }
};
