function count(num){
let count =0;

if(num==0)return 1;

num=Math.abs(num)
while(num>0){
    num=Math.floor(num/10)
    count++
}
console.log(count)
return count;
}

count(66);
