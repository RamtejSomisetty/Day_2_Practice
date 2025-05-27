#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//reversing a string
void swap(char* str,int i,int n){
    int temp = *(str+i);
    *(str+i)=*(str+n-i-1);
    *(str+n-i-1)=temp;

}
void reverse_string(char* str,int n){
    int mid=n/2;
    for(int i=0;i<mid;i++){
        swap(str,i,n);
    }
}
int main(){

    char* str = (char*)malloc(100*sizeof(char));
    strcpy(str,"ramtejsomisetty");
    int n = strlen(str);
    reverse_string(str,n);
    printf("Reverse string :%s\n",str);
}