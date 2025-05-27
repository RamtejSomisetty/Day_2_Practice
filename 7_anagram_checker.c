#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

//given strings satisfied the anagram conditions are not

int is_aanagram_strings(char str3[],char str4[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(str3[i]==str4[i]){
            count++;
        }
    }
    return count;
}
//sorting for array in increasing value
void sort_string(char str[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(str[j]>str[j+1]){
                char temp = str[j];
                     str[j]=str[j+1];
                     str[j+1]=temp;
            }
        }
    }
}

int main(){

    char str1[]= "RAMTEJ";
    char str2[]="jramte";
    

    int n1=strlen(str1);
    int n2=strlen(str2);

    if(n1==n2){
        char str3[n1+1],str4[n1+1];// +1 for null terminator (optional here)
        //UpperCase values  to Lower case values
        for(int i=0;i<n1;i++){
            str3[i]=tolower(str1[i]);
            str4[i]=tolower(str2[i]);   
        }
        sort_string(str3,n1);
        sort_string(str4,n1);
        
        int count = is_aanagram_strings(str3,str4,n1);

        if(count == n1){
            printf("\nthe given strings are anagrams");
        }
        else{
            printf("\nthe given strings are not anagrams");   
        }
    }
    else{
        printf("\nthe given strings are not anagrams because there length of strings not equal");
    }

}