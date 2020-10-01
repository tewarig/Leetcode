class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum = gas[0] - cost[0] , fuel_left = gas[0] , ans = 0 , n = gas.size();
        for(int i = 1; i<n ;i++)
        {
            fuel_left  = fuel_left - cost[i-1];
            sum  = sum + gas[i] - cost[i];
            if(fuel_left<=0)
            {
               // cout<<gas[i]<<" ";
                fuel_left = gas[i];
                ans = i;
            } else {
                fuel_left = fuel_left + gas[i];
            }
            
            
        }
      //  cout<< sum <<endl;
        if(sum<0)
            return -1;
        else
            return ans;
        
    }
};
/* Difficulty : Medium */
