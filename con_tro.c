#include<stdio.h>

void tinh_toan(int a, int b, char dau, int *tong, int *hieu, int *tich, float *thuong);


int main(){
    int a,b;
    char dau;
    int tich,hieu,tong;
    float thuong;
    printf("nhap a: ");
    scanf("%d",&a);
    
    printf("dau: ");
    scanf(" %c",&dau);
    
    printf("nhap b: ");
    scanf("%d",&b);
    
    tinh_toan(a,b,dau,&tong,&hieu,&tich,&thuong);
        if(dau == '+'){
        printf("Tong hai so: %d",tong);

        }

        if(dau == '-'){
        printf("Hieu hai so: %d",hieu);

        }
        if(dau == '*'){
        printf("Tich hai so: %d",tich);

        }
        if(dau == '/'){

        printf("Thuong hai so: %.2f",thuong);
        }

}

void tinh_toan(int a, int b, char dau, int *tong, int *hieu, int *tich, float *thuong){
    
    switch (dau)
    {
    case '+':
        *tong = a + b;
        break;
    case '-':
        *thuong = a - b;
        break;
    case '*':
        *tich = a * b;
        break;
    case '/':
        *thuong = a / b;
        
        break;
    }
}