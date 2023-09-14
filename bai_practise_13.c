/*cho mảng số nguyên gồm n phần tử tùy ý nhập từ bàn phím hoặc file. Nhập thêm giá trị k sao cho 0 <= k < n. Xóa phần tử tại vị trí Khỏi mảng. In mảng kết quả sau khi xóa ra màn hình.*/

#include<stdio.h>
#include<stdlib.h>

void nhap_mang(int *n, int *arr){
    int i;
    for(i = 0; i < *n; i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}
int nhap_K(int n){
    int k = -1;
    while(k < 0 || k >= n){
        printf("Nhap k (0 <= k < n): ");
        scanf("%d",&k);
    }
    return k;
}
void delete(int *n, int *arr, int k){
    int i;
    for(i = k; i < *n - 1; i++){
        arr[i] = arr[i + 1];// dịch sang trái 1 đơn vị 
        /*ví dụ:
        n = 6
        arr[0] = 1
        arr[1] = 2
        arr[2] = 3
        arr[3] = 4
        arr[4] = 5
        arr[5] = 6 
        cho k = 3 thì nó có điều kiện là k < n - 1 = 5 là nó chỉ xét đến 4 để khi dịch sang trái thì tới arr[4] = arr[5] thì dừng, nếu i < n thì nó chạy tới arr[5] gán arr[6] :) thì lại lố */
    }
    *n -= 1;
    for(i = 0; i < *n; i++){
        if(i != k){
        printf("arr[%d] = %d\n",i,arr[i]);
        }if(i == k){
            printf("arr[%d] = %d\n",i + 1,arr[i]);
        }
    }
}
// void delete(int n, int *arr, int k){
//     int i;
//     for(i = 0; i < n; i++){
//         if(k == i){
//             if(i == n - 1){
//                 i = n + 1;
//                 continue;
//             }
//             i++;
//         }
//         printf("arr[%d] = %d\n",i,arr[i]);
//     }
// }
int main(){
    int n;
    int *arr;
    int k;
    printf("Cap phat bo nho: ");
    scanf("%d",&n);
    arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Cap phat ko thanh cong!");
        exit(1);
    }else{
        printf("cap phat thanh cong!\n");
        nhap_mang(&n,arr);
    }
    printf("\n");
    k = nhap_K(n);
    delete(&n,arr,k);
}