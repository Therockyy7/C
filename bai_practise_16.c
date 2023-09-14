/*Nhập vào các hệ số của đa thức P và gía trị tùy ý của x. Tính  gía trị của đa thức
P(x) = An.X^n + An-1X^n-1 + ... + A1.X + A0*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void P(int *n, int *a){

    int i;
    int j;
    int x;
    int sum = 0;
    printf("Nhap x: ");
    scanf("%d",&x);
    getchar();
    
    for(i = 0; i <= *n; i++){
        
            printf("a%d = ",i);
            scanf("%d",&a[i]);
            getchar(); 
            sum = sum + a[i] * pow(x,i);
            j++;
          
    }
    printf("gia tri da thu la: %d",sum);
}

int main(){
    int n;
    int *a;
    printf("Nhap so n >= 0: ");
    scanf("%d",&n);
    getchar();
    int m = n + 1; 
    a = (int*)malloc(m * sizeof(int));
    P(&n,a);
}