class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s=0;
        int e=letters.size() -1;
        int ans=0;

        while(s<=e){
            int mid=s+(e-s)/2;

            if(letters[mid] == target){
                s=mid+1;
            }
            else if (letters[mid] < target)
            {
                s=mid+1;
            }
            else{
                e= mid-1;
                ans= mid;
            }
        }
        return letters[ans];
    }
};
