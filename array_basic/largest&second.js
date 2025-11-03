// let arr=[4,3,6]
//  let max=-Infinity
// for(let i=0;i<arr.length;i++){
//     if(arr[i]>max){
//         max=arr[i]
//     }
    
// }console.log(max)
let arr=[4,3,6,0,6]
 let max=-Infinity
let secondmax=-Infinity;
for(let i=0;i<arr.length;i++){
    if(arr[i]>max){
        secondmax=max;
        max=arr[i]
    }
    else if(arr[i]>secondmax&& arr[i]!=max)
        secondmax=arr[i]
    
    
  
}
  console.log(max,secondmax)