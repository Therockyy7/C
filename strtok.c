#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char a[100] = {"Hello, my name is phuc!"};
    char *token = strtok(a," ,!");
    while(token != NULL){
        printf("%s\n",token);
        token = strtok(NULL," ,!");
    }
    }