/*cho mảng số nguyên gồm n phần tử tùy ý nhập từ bàn phím ỏ file. tim số lần xuất hiện của từng phần tử trong mảng.*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void nhap_mang(int n, char *arr){
    int i;
    for(i = 0; i < n; i++){
        printf("arr[%d] = ",i);
        scanf("%c",&arr[i]);
        getchar();
    }
}
bool ktra_exist(char *b, int n, char v){
    int i;
    for(i = 0; i < n; i++){
        if(b[i] == v){
            return false;
        }
    }
    return true;
}
void ktra_soLan(int n, char *arr){
    int i;
    int j;
    char b[100];
    int dem = 0;
    int count = 0; 
    for(i = 0; i < n; i++){
        for(j = n - 1; j >= i; j--){
            if(arr[i] == arr[j] && ktra_exist(b,count,arr[i])){
                dem = dem + 1;
                if(i == j){
                    printf("ki tu %c co %d ki tu.\n",arr[i],dem);
                    b[count++] = arr[i];
                    dem = 0;
                }
            }
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
        nhap_mang(n,arr);
    }
    ktra_soLan(n,arr);
}