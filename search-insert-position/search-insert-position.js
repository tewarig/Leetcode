/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function(nums, target) {
    var start = 0;
    var end = nums.length - 1;
    while(start<=end){
        var mid = Math.round((start+end)/2);
        if(target == nums[mid]){
            return mid;
        }else if(target >= nums[mid]){
             start = mid + 1;     
        }else{
            end = mid - 1;
        }
    }
    return end+1;
    
};