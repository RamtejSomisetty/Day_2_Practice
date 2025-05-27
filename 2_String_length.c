#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//length of the string without using the strlen
int main(){
    char* str ="ramtej";
    int count =0;
    while(*str!='\0'){
        count++;
        str=str+1;
    }
    printf("Length of the string : %d\n",count);
}