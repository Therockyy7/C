/*Hãy viết chương trình tạo ngãu nhiên các giá trị cho một mảng gồm n phần tử. Mnagr được tạo sao cho các phần tử của mảng ko trùng nhau theo từng đôi bất kì*/

#include<stdio.h>
#include<stdbool.h>
#include<time.h>
#include<stdlib.h>

//{Cách này rand trong khoảng theo cách mình muốn}

bool check_lap(int *p, int n, int v){
    int i;
    for(i = 0; i < n; i++){
        if(p[i] == v){
            return false;
        }
    }
    return true;
}

void random(int *n, int *arr){
    int a,b;
    int i;
    int p[100];
    int count = 0;
    printf("Nhap doan muon random [a,b].\n");
    printf("Nhap a: ");
    scanf("%d",&a);
    printf("Nhap b: ");
    scanf("%d",&b);
    printf("\n");
    srand(time(NULL));
    for(i = 0; i < *n; i++){
        arr[i] = rand() % (b - a + 1) + a;
        if(check_lap(p,count,arr[i])){
            printf("arr[%d] = %d\n",i,arr[i]);//
            p[count] = arr[i];
            count++;
        }else{
            i = i - 1;//để vẫn giữ số của i khi mà các điều kiện trên sai và lúc random lại thì vẫn là arr[i] nó nhưng với một giá trị khác, chỉ là vẫn là i
                        // VD: arr[0] = 1, arr[1] = 2; arr[2] = 2
                        /*vì arr[2] = 2 bị lập lại giá trị của arr[1] nên sẻ random lại cho arr[2] nên vì thế i = i(cũ) - 1, để lên vòng lập thì i nó lại ++ thì vẫn giữ đc 2 mà ko bị
                        tăng lên 3.*/
        }
    }
}

//{Cách này là random lộn sộn ko theo khoảng nào nó rand trong [1,32700]}
// bool check_lap(int *p, int n, int x){
//     int i;
//     for(i = 0; i < n; i++){
//         if(p[i] == x){
//             return false;
//         }
//     }
//     return true;
// }

// void random(int *n, int *arr){
//     int i = 0;
//     int p[100];
//     srand(time(NULL));
//     while (i < *n) 
//     {
//         int x = rand();
//         if(check_lap(p,i,x)){
//             printf("arr[%d] = %d\n",i,x);
//             p[i++] = x;
//         }
//     }
    
// }



int main(){
    int n;
    int i;
    int *arr;
    printf("cap phat bo nho: ");
    scanf("%d",&n);
    arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Cap phat khong thanh cong!");
        exit(1);
    }else{
        printf("Cap phat thanh cong!\n");
    }
     random(&n,arr);
}
