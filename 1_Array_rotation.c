#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//rotate left by k terms

void print_array(int array[],int n,int k){
    printf("Array after shifting %d terms left : ",k);
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}
void shift_left(int array[],int n){
    int key =array[0];
    for(int i=0;i<n-1;i++){
        array[i]=array[i+1];
    }
    array[n-1]=key;
}
void rotateLeft(int arr[], int n, int k) {
    for(int i=0;i<k;i++){
        shift_left(arr,n);
    }
    print_array(arr,n,k);
}
int main(){

    int array[] = {1,2,3,4,5,6,7,8,9};
    int n=sizeof(array)/sizeof(array[0]);
    int k=2;    
    rotateLeft(array,n,k);
}