/**
 * @param {string} command
 * @return {string}
 */
var interpret = function(command) {
    
    
    let word = "";
    for(let i=0;i<command.length;i++){
        if(command[i]=='(' || command[i]==')'){
            if(command[i]=='(' && command[i+1]==')'){
                word += 'o';
            }
        }else{
            word += command[i];
        }
    }
    return word;
};