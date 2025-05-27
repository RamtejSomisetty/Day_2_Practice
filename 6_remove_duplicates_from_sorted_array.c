#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Remove duplicants from the sorted array;

void shift_left(int i,int arr[],int* n){
    for(int j=i;j<*n-1;j++){
        arr[j]=arr[j+1];
    }
    *n=*n-1;
}
void print_elements(int array[],int *n){
    for(int i=0;i<*n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

void remove_duplicants(int array[],int* n){

    int i = 0;
    while (i < *n - 1) {
    if (array[i] == array[i + 1]) {
        shift_left(i, array, n);
    } else {
        i++;
    }
}
    print_elements(array,n);

}
int main(){
    int array[]={1,2,3,3,3,4,4,4,5,6,6,6,6,6,7,7,7,8,8,9,10,10,10};
    int n = sizeof(array)/sizeof(array[0]);
    remove_duplicants(array,&n);
}