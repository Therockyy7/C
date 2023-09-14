/*Cho mảng số nguyên gồm n phần tử n - 1 phần tử tùy ý nhập từ bàn phím. Xắp xếp n - 1 phần tử của mảng này theo thứ tự tăng dần. sau đó nhập một số nguyên x tùy ý.
 Chèn x vào mảng soa cho vẫn giữ đc tính chất sắp xép của mảng.*/

#include<stdio.h>
#include<stdlib.h>

void nhap_mang(int *n, int *arr){
    int i;
    for(i = 0; i < *n - 1; i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
        
    }
    int j;
    int m;
    for(i = 0; i < *n - 2; i++){
        for(j = *n - 2; j > i; j--){
            if(arr[j] < arr[j - 1]){
                m = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = m;
            }
        }
    }
    printf("Sap xep Min-Max:\n");
    for(i = 0; i < *n - 1; i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }
}
// int nhap_k(int n){
//     int i;
//     int k = -1;
//     while(k < 0 || k >= n){
//         printf("Nhap k (0 <= k < n): ");
//         scanf("%d",&k);
//     }
//     return k;
// }
int  Nhap_x(){
    int x;
    printf("Nhap X: ");
    scanf("%d",&x);
    return x;
}

int timViTri(int n, int *arr, int x){
    if(x > arr[n - 2]){/*vì lúc đầu ta chỉ nhập n - 1 phần tử còn chừa 1 khoảng trống để chèn thêm vào
                    ví dụ:
                    n =6 thì nhập từ 0 đến 4 chừa lại ô 5 để chèn */
        return n - 1;
    }
    int i;
    for(i = 0; i < n; i++){
        if(x <= arr[i]){
            return i;

        }
    }
}

void them(int n, int *arr, int k, int x){
    int i;
    for(i = n - 1; i > k; i--){
        arr[i] = arr[i - 1];
    }
    arr[k] = x;
}

void Min_Max(int n, int *arr){
    int i;
    int j;
    int m;
    for(i = 0; i < n - 1; i++){
        for(j = n - 1; j > i; j--){
            if(arr[j] < arr[j - 1]){
                m = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = m;
            }

        }
    }
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
    arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Cap phat khong thanh cong!");
        exit(1);
    }else{
        printf("Cap phat thanh cong!\n");
    }
    nhap_mang(&n,arr);
    //k = nhap_k(n);s
    x = Nhap_x();
    k = timViTri(n,arr,x);
    them(n,arr,k,x);
    Min_Max(n,arr);
    out(n,arr);
}

