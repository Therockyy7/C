/*Cho mảng số nguyên arr2 gồm n + m phần tử trong đó n phần tử tùy ý đã đc nhập vào từ bàn phím hoặc file. Mảng arr1 gồm m phần từ tùy ý nhâp từ bàn phím ỏ file. Nhặp số k sao cho  0 <= k < n.
 Hãy chèn mảng thứ hai(độ dài m) vào vị trí k của mảng thứ nhất. IN ra kết quả sau khi chèn*/

#include<stdio.h>
#include<stdlib.h>

void nhap_mang(int *n, int *m, int *arr1, int *arr2){
    int i;
    printf("Nhap mang arr1\n");
    for(i = 0; i < *m; i++){
        printf("arr1[%d] = ",i);
        scanf("%d",&arr1[i]);
    }
    printf("\nNhap mang arr2\n");
    for(i = 0; i < *n; i++){
        printf("arr2[%d] = ",i);
        scanf("%d",&arr2[i]);
    }
}
int Nhap_k(int n){
    int i;
    int k = -1;
    while(k < 0 || k >= n){
        printf("Nhap k (0 <= k < n): ");
        scanf("%d",&k);
    }
    return k;
}
void chen_k(int n, int m,int *arr1, int *arr2, int k, int Q){
    int i;
    // dich snag phai m don vi
    for(i = Q - 1; i >= k; i--){
        arr2[i] = arr2[i - m];
    }
    // gan gia tri
    for(i = k; i < k + m; i++){
        arr2[i] = arr1[i - k];
    }
}
void out(int *Q, int *arr2){
    int i;
    for(i = 0; i < *Q; i++){
        printf("arr2[%d] = %d\n",i,arr2[i]);
    }
}

int main(){
    int n;
    int m;
    int k;
    int *arr1;
    int *arr2;
    printf("Cap phat bo nho cho arr1: ");
    scanf("%d",&m);
    printf("Cap phat bo nho cho arr2(bo nho = arr1 + arr2): ");
    scanf("%d",&n);
    int Q = n + m;
    arr1 = (int*)malloc(m * sizeof(int));
    arr2 = (int*)malloc(Q * sizeof(int));
    if(arr1 == NULL || arr2 == NULL){
        printf("Cap phat khong thanh cong!.");
        exit(1);
    }else{
        printf("Cap phat thanh cong!.");
    }
    nhap_mang(&n,&m,arr1,arr2);
    printf("\n");
    k = Nhap_k(n);
    chen_k(n,m,arr1,arr2,k,Q);
    printf("Chen mang arr1 vao arr2: \n");
    out(&Q,arr2);

}