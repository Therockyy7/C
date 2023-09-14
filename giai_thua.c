#include<stdio.h>

int gia_thua(int n){
    int GT = 1;
    int i;
    for(i = 1; i < (n + 1); i++){
        GT = GT * i;
    }
    return GT;
}

int main(){
    int n;
    printf("Nhap n:  ");
    scanf("%d",&n);
    int ket_qua = gia_thua(n);
    printf("%d! = %d",n,ket_qua);
}