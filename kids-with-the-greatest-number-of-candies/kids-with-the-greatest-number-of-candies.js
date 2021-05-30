/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
    var array = [];
    var max = 0;
     candies.forEach(function(x){
         if(x>=max)
    {
        max = x;
    }
     }) 
    
    candies.forEach(function(x){
     var temp = x + extraCandies;
        if(temp>=max)
            {
                array.push(true);
            }else{
                array.push(false);
            }
        
    })
    
    return array;
};