class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());

    }
};
// Second manual approach
// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int n=s.size();
//         int i=0;
//         int j=n-1;
//         while(i<=j)
//         {
//             swap(s[i],s[j]);
//             i++;
//             j--;
//         }

//     }
// };
