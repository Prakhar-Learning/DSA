

// function target(arr,target){
// for(let i=0;i<arr.length;i++)
// if(arr[i]==target){
//     console.log("element found",i)
//     return i;
// }

// return -1;
    
// }

// let r=[2,3,1,4,6,7,8]
// target(r,9)

// function count(arr){
//     let count=0;
//     for(let i=0;i<arr.length;i++){
//         if (arr[i]<0){
//             count++;
//         }
//     }
//     console.log(count)
// }
// count([3,-1,-2,-3,5,7,-7])



function larget(arr){
    let min = Infinity;
    for (let i=0;i<arr.length;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    console.log(min)
    return min;
}

let arr=[10,20,11,23,55,66,89]
larget(arr)









