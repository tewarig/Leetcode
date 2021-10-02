class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int ,int > m;
        int len = nums.size();
        for(int i=0;i<len;i++){
            m[nums[i]]++;
        }
          for(int i=0;i<len;i++){
           if(m[nums[i]]>1){
               return true;
           }
        }
        return false;
    }
};