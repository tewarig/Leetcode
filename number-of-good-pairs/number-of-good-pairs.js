/**
 * @param {number[]} nums
 * @return {number}
 */
var numIdenticalPairs = function(nums) {
    
    
 var n = 0;
 var m = nums.length;
for(var i=0;i<m;i++)
    {
        for(var j=i+1;j<m;j++)
            {
                if(nums[i]==nums[j])
                    {
                        n++;
                    }
            }
    }
    
    return n;
};