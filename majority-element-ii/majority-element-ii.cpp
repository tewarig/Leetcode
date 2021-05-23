class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        vector<int> v;
        int element1 = -1;
        int count1 = 0;
        int element2 = -1;
        int count2 = 0;
        for(int x : nums ){
            if(element1 == x)
            {
                count1++;
            }else if(element2 == x){
                count2++;
            }else if(count1 == 0)
            {
                element1 = x;
                count1 = 1;
            }else if(count2 == 0){
                element2 = x;
                count2 = 1;
            }else{
                count1--;
                count2--;
            }
        }
      cout<<element1 <<" "<<element2;

        int c1 = 0;
        int c2 = 0;
        for(auto x : nums)
        {
            if(element1 == x)
            {
                c1++;
            }
            if(element2 == x)
            {
                c2++;
            }
        }
        cout<<c1<<" "<<c2;
      int k = nums.size();
        k = k/3;
        if(c1>k)
        {
            v.push_back(element1);
        }
        if(element1 !=element2){
            if(c2>k)
        {
            v.push_back(element2);
        }
        }
        
        return v;
    }
};