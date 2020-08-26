class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        string blank = "";
        if(n ==  m)
        {
            if(str1 == str2)
            {
              return str1;        
            }   else {
                return blank ; 
            }
        }
        if(n<m){
            gcdOfStrings(str2,str1);
        }
             
            int div = n/m;
            int isRepeated = n%m;
        for(int i=1;i<div;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(str2[j] != str1[j+ i*m])  return "";  
            }
        }
        if(isRepeated == 0) return str2;
        
        return gcdOfStrings(str2, str2.substr(0,isRepeated));
            
        
        
    }  ;
};
