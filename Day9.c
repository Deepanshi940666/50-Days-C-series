// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.You may assume that each input would have exactly one solution, and you may not use the same element twice.You can return the answer in any order.
 #include<stdio.h>
 int main(){
    int a[4]={1,5,6,7};
    int target=13,get=0,i,j;
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(a[i]+a[j]==target){
               printf("[%d,%d]",i,j);
               return 0;
            }
        }
    }
    printf("No solution found");
    return 0;
 }