/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    let copy=x;
    let rev=0;
    x=Math.abs(x)
    
    while(x>0){
        let rem=x%10;
        rev=(10*rev)+rem;
        x=Math.floor(x/10)
    }
let limit=2**31
    if(rev < -limit||rev > limit-1)return 0;
    
    if(copy<0){
        return -rev
    }else{
        return rev
    }
};