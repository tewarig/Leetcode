/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
    let left = [];
    let right = [];
    left.push(1);
    for(let i=1;i<nums.length;i++){
        let temp = left[i-1] * nums[i-1];
        left.push(temp);
        
    }
    right.push(1);
    for(let j=nums.length -2;j>=0;j--){
        let temp = right[nums.length-j-2] * nums[j+1];
        // console.log(nums.length-j-2);
        right.push(temp);
    }
    right.reverse();
    for(let k=0;k<nums.length;k++){
        nums[k] = left[k]*right[k]; 
    }
    return nums;
};