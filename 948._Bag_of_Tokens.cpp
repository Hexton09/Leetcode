class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {

        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1,score=0,maxscore=0;
        while(i<=j)
        {
            if(power>=tokens[i])
            {
                power=power-tokens[i];
                score++;
                i++;
                maxscore=max(score,maxscore);
            }
            else if(score>0)
            {
                power=power+tokens[j];
                score--;
                j--;
            }
            else
            {
                break;
            }
        }
        return maxscore;
        
    }
};
