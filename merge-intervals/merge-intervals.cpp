class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
         
        sort(intervals.begin(),intervals.end());
       if(intervals.size() == 0)
       {
           return intervals;
       }
        vector<vector<int>> yo;
        vector<int> temp = intervals[0];
        for(auto x: intervals)
        {
            if(x[0]<=temp[1])
            {
                temp[1] = max(temp[1],x[1]);
            }else{
                yo.push_back(temp);
                temp = x;
        }
            
        }
        yo.push_back(temp);
        return yo;
        
    }
};