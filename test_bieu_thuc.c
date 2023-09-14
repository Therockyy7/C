/*Nhập vào các hệ số của đa thức P và gía trị tùy ý của x. Tính  gía trị của đa thức
P(x) = An.X^n + An-1X^n-1 + ... + A1.X + A0*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void nhap_a(int *n, int *a){
    int i;
    int sum = 0;
    for(i = 0; i <= *n; i++){
        printf("a%d = ",i);
        scanf("%d",&a[i]);
    }
    int x;
    int P = 0;
    printf("Nhap gia tri x: ");
    scanf("%d",&x);
    for(i = 0; i <= *n; i++){
        P = P + a[i] * pow(x,i);
    }
    printf("P(x) = %d",P);
}


int main(){
    int n;
    int *a;
    printf("Nhap n >= 0: ");
    scanf("%d",&n);
    int m = n + 1;
    a = (int*)malloc(m * sizeof(int));
    nhap_a(&n,a);

}