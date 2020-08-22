class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        int n = queries.size();
        vector <int> quer;
        for(int i=0;i<n;i++)
        {
            string s = queries[i];
            sort(s.begin(),s.end());
            for(int i=0;i<s.size();i++)
            {
                if(s[i]!=s[i+1])
                {
                    quer.push_back(i+1);
                    break;
                }
            }
        }
        int m = words.size();
        vector <int> wor;
        for(int i=0;i<m;i++)
        {
            string s = words[i];
            sort(s.begin(),s.end());
            for(int i=0;i<s.size();i++)
            {
                if(s[i]!=s[i+1])
                {
                    wor.push_back(i+1);
                    break;
                }
            }
        }
        vector <int> ans;
        for(int i=0;i<quer.size();i++)
        {
            int count = 0;
            for(int j=0;j<wor.size();j++)
            {
                if(quer[i]<wor[j])
                    count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};
