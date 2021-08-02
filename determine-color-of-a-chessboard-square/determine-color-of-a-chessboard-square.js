/**
 * @param {string} coordinates
 * @return {boolean}
 */
var squareIsWhite = function(coordinates) {
    const [a,b] = coordinates;
    let rows = parseInt(b);
    let twoNumber = false;
    if(rows%2==0){
            twoNumber = true;
    }else{
        twoNumber = false;
    }
    let column = a.charCodeAt(0);
    let oneNumber = false;
     if(column%2==0){
            oneNumber = true;
    }else{
        oneNumber = false;
    }
    if((oneNumber && !twoNumber) || (!oneNumber && twoNumber)){
        return true;
    }else{
        return false;
    }
                             
};