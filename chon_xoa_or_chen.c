#include<stdio.h>
#include<stdlib.h>

void menu(){
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Chon Xoa/Them\n");
    printf("1) Xoa 1 mang.\n");
    printf("2) Them 1 mang.\n");
}
void nhap_mang(int *n, int *arr){
    int i;
    for(i = 0; i < *n; i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}
void nhap_mang2(int *n, int *arr){
    int i;
    for(i = 0; i < *n - 1;i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}
int nhap_K(int n){
    int k = -1;
    while (k < 0 || k >= n)
    {
        printf("Nhap k (0 <= k < n): ");
        scanf("%d",&k);
    }
    return k;
    
}
void delete(int *n, int *arr, int k){
    int i;
    for(i = k; i < *n - 1; i++){
        arr[i] = arr[i + 1];
    }
    *n -= 1;
    for(i = 0; i < *n; i++){
        printf("arr[%d] = %d\n",i,arr[i]);
        }
}
int nhap_x(int k){
    int x;
    printf("Nhap gia tri x: ");
    scanf("%d",&x);
    return x;
}
void them(int n, int *arr, int k, int x){
    int i;
    for(i = n - 1; i > k; i-- ){
        arr[i] = arr[i - 1];
    }
    arr[k] = x;
    for(i = 0; i < n; i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }
}
int main(){
    int n;
    int *arr;
    int k;
    int x;
    printf("Cap phat bo nho: ");
    scanf("%d",&n);
    arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Cap phat khong thanh cong!");
        exit(1);
    }else{
        printf("Cap phat thanh cong!\n");
    }
    menu();
    int QA;
    printf("Lua chon: ");
    scanf("%d",&QA);
    getchar();
    switch (QA)
    {
    case 1:
        nhap_mang(&n,arr);
        k = nhap_K(n);
        delete(&n,arr,k); 
        break;
    case 2:
        nhap_mang2(&n,arr);
        k = nhap_K(n);
        x = nhap_x(k);
        them(n,arr,k,x);
        break;
    }
}