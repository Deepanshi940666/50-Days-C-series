//Check if array is sorted and rotated(28-10-25)
#include<stdio.h>

int main(){
    int arr[5]={2,1,3,4,12};
    int count=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]>arr[(i+1)%n]){
          count++;
        }
    }
    if(count<=1){
        printf("The array is sorted and rotated.");
    }
    else{
       printf("The array is not sorted and not rotated.");
    }
   return 0;
}