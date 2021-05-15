class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        int  k = 1;
        while(k<=numRows){
             vector<int> p(k);

            if(k==1)
            {
               vector<int> m;
                m.push_back(k);
                v.push_back(m);
            }else if(k==2){
                 vector<int> p(k);

                 p[0] = 1;
                p[k-1] = 1;
                v.push_back(p);
                
            }else{
                p[0] = 1;
                p[k-1] = 1;
                for(int i=1;i<k-1;i++)
                {
                    p[i] = v[k-2][i-1] + v[k-2][i];
                }
                
                
              v.push_back(p);

                
            }
            k++;
        }
       return v;     
        
    }
};