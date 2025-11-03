// function reverseString(s) {
//    let len=s.length;
//    let half=Math.floor(len/2)

//    for (let i=0;i<half;i++){
//     let temp=s[i]
//     s[i]=s[len-1-i];
//     s[len-1-i]=temp
//    }
//    console.log(s)
//    return s;
// };
// console.log(reverseString(["h","e","l","l","o"]))

var reverseString = function(s) {
   let len=s.length;
   let half=Math.floor(len/2)

   for (let i=0;i<half;i++){
    let temp=s[i]
    s[i]=s[len-1-i];
    s[len-1-i]=temp
   }
    
};