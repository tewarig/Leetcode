class Solution {
public:
    int smallestcharfreq(string s)
    {
     int n = s.size();
    int min = 122;
    for(int i=0;i<n;i++)
    {
        if(s[i]<min)
        {
            min = s[i];
        }
    }
    int count = 0;
     for(int i=0;i<n;i++)
    {
        if(s[i] == min)
        {
            count++;
        }
    }
    
    return count;
    }
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) 
    {
        int n = words.size(),m = queries.size(),count,p;
        string str,s;
        vector <int> v,result;
        for(int i = 0; i < n; ++i)
        {
            str = words[i];
            p = smallestcharfreq(str);
            v.push_back(p);
        }
        int sz = v.size(),c;
        for(int i = 0; i < m; ++i)
        {
            c = 0;
            s = queries[i];
            count = smallestcharfreq(s);
            for(int i = 0; i < n; ++i)
            {
                if(count < v[i])
                    c++;
            }
            result.push_back(c);
        }
        return result;
    }
};
