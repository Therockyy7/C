#include<stdio.h>

int giai_thua(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n * giai_thua(n-1);
    } 
}

int main(){
    int n;
    do{
    printf("Nhap n: ");
    scanf("%d",&n);
    }while(n<=0);

    int ket_qua = giai_thua(n);
    printf("%d!=%d",n,ket_qua);
    
}