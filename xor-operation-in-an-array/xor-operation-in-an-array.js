/**
 * @param {number} n
 * @param {number} start
 * @return {number}
 */
var xorOperation = function(n, start) {
    
    var xor = 0;
    for(var i=0;i<n;i++)
        {
            xor ^= start + (2 * i);
        }
    return xor;
};