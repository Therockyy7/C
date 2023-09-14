#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

char random_alpha(){
    char alpha[] = "ABCDEFGHIKLMNOPQRSTUVWFYJZ";
    return alpha[rand() % 26];
}
int random_digit(){
    char digit[] = "0123456789";
    return digit[rand() % 10];
}
void random_ID(char id[]){
    srand(time(NULL));
    int i;
    for(i = 0; i < 3; i++){
        id[i] = random_digit();
    }for(i = 3; i < 5; i++){
        id[i] = random_alpha();
    }
    id[5] = '\0';
    printf("ID: %s",id);
}


int main(){
    char id[6];
    random_ID(id);
}