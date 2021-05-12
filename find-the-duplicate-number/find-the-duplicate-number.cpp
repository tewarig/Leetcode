class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> k;
        for(auto x: nums)
        {
           if(k[x]>0 )
           {
               return x;
           }else{
               k[x]++;
           }
            // cout<<k[x]<<" ";
          
        }
        return -1;
    }
};