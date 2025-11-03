//26. Remove Duplicates from Sorted Array

// var removeDuplicates = function(nums) {
//     let ans=0;
//     let n=nums.length
//     for(let i=0;i<n;i++){
//         if(nums[i]>nums[ans]){
//         ans=ans+1;
//         nums[ans]=nums[i]
//         } } return ans+1
//     }


let arr=[1,1,2,2,3,4,4,5];

let x=0;
let n=arr.length;
for(let i=0;i<n;i++){
    if(arr[x]>arr[i]){
x=x+1;
arr[x]=arr[i]
    }

}

return x+1

