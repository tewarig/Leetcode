/**
 * @param {string[][]} items
 * @param {string} ruleKey
 * @param {string} ruleValue
 * @return {number}
 */
var countMatches = function(items, ruleKey, ruleValue) {
    let check = 0;
    if(ruleKey ==='type'){
        check = 0;
    }else if(ruleKey === 'color'){
        check = 1;
    }else{
        check = 2;
    }
    let count = 0;
    for(let i=0;i<items.length;i++){
        if(items[i][check]===ruleValue){
            count++;
        }
    }
    return count;
};