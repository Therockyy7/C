/*cho mảng số nguyên gồm n phần tử tùy ý nhập từ bàn phím ỏ file. Hãy in ra các phần tử của nó sao cho mỗi phần tử chỉ xuất hiện duy nhất mottj lần.*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void nhap_mang(int *n, char *arr){
    int i;
    for(i = 0; i < *n; i++){
        printf("arr[%d] = ",i);
        scanf("%c",&arr[i]);
        getchar();
    }
}
bool check_exsit(char *b, int n, int v){
    int i;
    for(i = 0; i < n; i++){
        if(b[i] == v){
            return false;
        }
    }
    return true;
}
void ktra_mang(int n, char *arr){
    int i;
    char b[100];
    int count = 0;
    for(i = 0; i < n; i++){
        if(check_exsit(b,count,arr[i])){
            printf("arr[%d] = %c\n",i,arr[i]);
            b[count++] = arr[i];
        }
    }
}


int main(){
    int n;
    char *arr;
    printf("Cap phat bo nho: ");
    scanf("%d",&n);
    getchar();
    arr = (char*)malloc(n * sizeof(char));
    if(arr == NULL){
        printf("Cap phat khong thanh cong!");
        exit(1);
    }else{
        printf("Cap phat thanh cong!\n");
    }
    nhap_mang(&n,arr);
    printf("\n");
    ktra_mang(n,arr);
}