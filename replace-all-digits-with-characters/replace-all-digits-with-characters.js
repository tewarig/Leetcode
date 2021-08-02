/**
 * @param {string} s
 * @return {string}
 */
var replaceDigits = function(s) {
    let temp = "";
    for(let i=0;i<s.length;i++){
     if((parseInt(s[i]))||(parseInt(s[i]))===0){
       let word= String.fromCharCode(s[i-1].charCodeAt(0)+parseInt(s[i]));
         if(word == 0){
             temp += s[i-1]
         }else{
             temp += word;
         }
     }else{
         temp += s[i];
     }
    }
    
    return temp;
};