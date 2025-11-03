var removeElement = function(nums, val) {
     let ans=0;
     let n=nums.length
    for(let i=0;i<n;i++){
       if(nums[i]!=val){
        nums[ans]=nums[i]
        ans=ans+1;
       }
      
       } return ans
};