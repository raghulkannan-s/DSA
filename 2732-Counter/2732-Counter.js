// Last updated: 7/18/2025, 6:57:56 PM
/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    i = 0
    return function() {
        
       n =  n + i
       if (i==0){
        i=i+1
       }
        return n
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */