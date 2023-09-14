/*Cho mảng số nguyên gồm n phần tử tùy ý nhập từ bàn phím hoặc file Nhập thêm giá trị nguyên X và đếm số lần xuất hiên x trong mảng*/
#include<stdio.h>

void nhap_mang(int *n, int *arr){
    while(*n <= 0){
        printf("Nhap n>0: ");
        scanf("%d", n);
    }
    int i;
    for(i = 0; i < *n; i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}
void dem(int n, int *arr, int *DM, int *so){
    int i;
    printf("Nhap so muon dem trong mang: ");
    scanf("%d", so);
    for(i = 0; i < n; i++){
        if(*so == arr[i]){        
            *DM += 1;
        }
    }
}

int main(){
    int n = 0;
    int arr[100];
    int DM = 0;
    int so = 0;
    nhap_mang(&n,arr);
    dem(n,arr,&DM,&so);
    printf("so %d trong mang la %d so",so,DM);
}