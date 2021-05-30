/**
 * @param {string} address
 * @return {string}
 */
var defangIPaddr = function(address) {
 var final =  address.split('.').join('[.]');
 return final;
};