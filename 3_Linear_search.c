#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//counting the total number of occurances of an element in the array
int* findAllOccurrences(int arr[], int n,int target,int* count){
    *count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            *count=*count+1;
        }
    }
    return count;
}
int main(){
      
     int arr[]={1,2,2,2,3,4,5,6,7,2,3,4,2,2,3,4,5};
     int n =sizeof(arr)/sizeof(arr[0]);
     int target=2;
     int *count=(int*)malloc(sizeof(int));
     printf("Total number of times Occurance of %d : %d ",target,*(findAllOccurrences(arr,n,target,count)));
    
}