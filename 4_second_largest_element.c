#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int find_largest_element(int arr[],int n,int max){
    for(int i=0;i<n;i++) {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
void secondLargest(int arr[], int n){
    int max=-999;
    int k=find_largest_element(arr,n,max);
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            arr[i]=-999;
        }
    }
    int k1=find_largest_element(arr,n,max);
    printf("Second largest element in the array :%d\n",k1);

}
int main(){
    int arr[]={1,2,2,2,3,4,5,6,7,2,3,4,2,2,3,4,5};
     int n =sizeof(arr)/sizeof(arr[0]);
     secondLargest(arr,n);
}