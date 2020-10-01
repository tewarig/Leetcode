class Solution {
public:
    bool isValid(string s) {
       stack <char> st;
        int n  = s.size();
        for(int i = 0;i<n;++i)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                st.push(s[i]);
            else if((st.size())&&(s[i]==')'&&st.top()=='('||s[i]==']'&&st.top()=='['||s[i]=='}'&&st.top()=='{'))
                st.pop();
            else st.push(s[i]);
                
        }
        cout<<st.size()<<" ";
        if(st.size()||s.size()%2)
            return false;
        else return true;
    }
};
