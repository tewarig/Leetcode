class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
      sort(nums.begin(),nums.end());
        
      int count = 0;
      int max = 0;
        int n = nums.size();
        if((n==0))
        {
            return 0;
        }
        
        for(int i=1;i<n;i++)
        {
            cout<<nums[i]<<":"<<count<<"\n";
                   if(nums[i-1]+1 == nums[i])
                   {
                      count++;
                       if(count>max)
                       {
                           max = count ;
                       }
                  }else if(nums[i-1] == nums[i] ){
                          
                       }else{
                          count = 0; 
                       }
                        
                   }
        
        return max+1;
        
    }
};