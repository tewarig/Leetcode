class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int element = 0;
        int n = nums.size();
        int count = 0;
        for( auto x: nums)
        {
            if(count==0)
            {
                element = x;
                
            }
            if(element != x)
            {
                count --;
            }else{
                count++;
            }
        }
        return element ;
        
    }
};