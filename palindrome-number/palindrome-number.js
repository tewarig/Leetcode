/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
      if(x<0){
        return false;
    }
    if(x<10){
        return true;
    }

    let string = x.toString();
    let len = string.length;
    for(i=0;i<string.length/2;i++){
        if(string[i]==string[len-1-i]){
            
        }else{
            return false;
        }
    }
    
    return true;
   
};