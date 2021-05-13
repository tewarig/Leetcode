class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     int v = matrix.size();
     int v1 = matrix[0].size();
        unordered_set<int> u;
        unordered_set<int> u1;
        for(int i=0;i<v;i++)
      {
          for(int j=0;j<v1;j++)
          {
              if(matrix[i][j]==0)
              {
                  u.insert(i);
                  u1.insert(j);
              }
          }
      }
          for(int i=0;i<v;i++)
      {
            bool isZero = false;             
            if(u.find(i)!=u.end())
            {
                isZero = true;
            }             
          for(int j=0;j<v1;j++)
          {
              if(isZero)
              {
                  matrix[i][j] = 0;
              }
          }
               
      }
        for(int i=0;i<v1;i++)
        {
            bool isZero2 = false;
            if(u1.find(i)!=u.end()){
                isZero2 = true;
            }
            for(int j=0;j<v;j++)
            {
                if(isZero2){
                matrix[j][i] = 0;
                }
            }
        }
        
        
        
    }
};