#include<stdio.h>

int main(){



int a = 10; // khai báo biến a có giá trị la 10
int *p; // khai báo con trỏ p
p = &a; // gán con trỏ p bằng địa chỉ của biến a
printf("Gia tri cua bien a la %d\n", a); // in ra giá trị của biến a
printf("dia chi cua bien a la %x\n", &a); // in ra địa chỉ của biến a
printf("gia tri cua con tro p la %x\n", p); // in ra giá trị của con trỏ p (bằng địa chỉ của biến a)
printf("Gia tri ma con tro p tro den la %d\n", *p); // in ra giá trị mà con trỏ p trỏ đến (bằng giá trị của biến a)
}
