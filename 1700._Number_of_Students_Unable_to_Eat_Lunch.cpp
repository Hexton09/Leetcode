class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        stack<int>st;
        deque<int>dq;
        int rotation =0;

        for(int i=students.size()-1;i>=0;i--)
        {
            st.push(sandwiches[i]);
            dq.push_front(students[i]);
        }

        while(!st.empty() && !dq.empty())
        {
            if(st.top()==dq.front())
            {
                st.pop();
                dq.pop_front();
                rotation =0;
            }
            else
            {
                dq.push_back(dq.front());
                dq.pop_front();
                rotation++;
                if(rotation==dq.size())
                {
                    break;
                }
            }
        }

        return dq.size();

    }
};
