/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    if(x===0){
        return 0;
    }
    
    let temp = [];
    let reverseNumer = '';
    let string = x.toString();
    let negative = false;
    if(string[0]==='-'){
        string.slice(0);
        negative = true;
    }
    let len = string.length;
    for(let i=0;i<len;i++){
        temp.push(string[i]);
        
    }
    let check = true;
    for(let j=len-1;j>=0;j--){
        if((temp[j]==='0')& (check)){
            
        }else{
            reverseNumer += temp[j];
            check = false;
        }
    }
     if (parseInt(reverseNumer) > 2 ** 31 - 1) {
    return 0;
  }
    // console.log(reverseNumer);
    return negative ? parseInt(reverseNumer) * -1 : reverseNumer;
    
    
};