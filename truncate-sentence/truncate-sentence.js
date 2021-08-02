/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var truncateSentence = function(s, k) {
    let temp = s.split(" ");
    let final = '';
    for(let i=0;i<k;i++){
       final +=  temp[i];
      if(i !== k -1){
       final += ' ';
      }
    }
    
    return final;
};