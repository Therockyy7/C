/*cho mảng số nguyên gồm n phần tử trong đó có n - 1 phần tử tùy ý nhập từ bàn phím. Hãy nhập thêm giá trị nguyên x và một số nguyên k sao cho 0 <= k < n.Chèn x vào vị trí k cảu mảng*/

#include<stdio.h>
#include<stdlib.h>

void nhap_mang(int *n, int *arr){
    int i;
    for(i = 0; i < *n - 1; i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}

int nhap_k(int n){
    int k = -1;
    while (k < 0 || k >= n)
    {
    printf("Nhap 0 <= K < n: ");
    scanf("%d",&k);
    getchar();
    }
    return k;
}

void replace(int n, int *arr, int k, int x){
    int i;
    for(i = n - 1; i > k; i--){
         arr[i] = arr[i - 1];
    }
    arr[k] = x;

}
void out(int n, int *arr){
    int i;
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
    getchar();
    arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Cap phat khong thanh cong!");
        exit(1);
    }else{
        printf("Cap phat thanh cong!\n");
    }
    nhap_mang(&n,arr);
    printf("\n");
    k = nhap_k(n);
    printf("Nhap gia tri x: ");
    scanf("%d",&x);
    getchar();
    replace(n,arr,k,x);
    printf("\n");
    out(n,arr);

}