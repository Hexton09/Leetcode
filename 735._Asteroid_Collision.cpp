class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;

        for(int &a : asteroids)
        {
            //when collision happens
            while(!st.empty() && a<0 && st.back() > 0)
            {
                int sum =a + st.back();

                if(sum<0)
                {
                    st.pop_back();
                }
                else if(sum>0)
                {
                    a=0;
                    //break
                }
                else
                {
                    //sum==0
                    st.pop_back();
                    a=0;
                    //break
                }
            }

            if(a !=0)
            {
                st.push_back(a);
            }
        }
        return st;
    }
};
