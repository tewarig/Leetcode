/**
 * @param {string} jewels
 * @param {string} stones
 * @return {number}
 */
var numJewelsInStones = function(jewels, stones) {
    var count = 0;
    var l1 = jewels.length;
    var l2 = stones.length;
    for(var i=0;i<l1;i++)
        {
            for(var j=0;j<l2;j++)
                {
                    if(jewels[i]==stones[j])
                        {
                            count++;
                        }
                }
        }
    return count;
    
};