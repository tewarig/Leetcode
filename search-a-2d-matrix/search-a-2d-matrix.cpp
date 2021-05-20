class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int m = matrix.size();
        int tempi = 0;
        for(int i=0;i<m;i++)
        {
            if (matrix[i][0] == target)
            {
                return true;
            }else if(matrix[i][0] > target)
            {
                tempi = i-1;
                break;
            }else if(target > matrix[i][0])
            {
                tempi = i;
            }
        }
        cout<<tempi<<" ";
        
        bool isFound = false;
        if(tempi==-1)
        {
            return false;
        }else{
            int n = matrix[0].size();
            for(int i=0;i<n;i++)
            {
                if(target == matrix[tempi][i])
                {
                    isFound = true;
                    break;
                }else if(target<matrix[tempi][i])
                {
                    return false;
                }else{
                    
                }
            }
        }
        return isFound; 
    }
};