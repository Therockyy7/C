/*Cho mảng số nguyên gồm n phần tử tùy ý nhập từ bàn phím ỏ file.Nhâp thêm hai giá trị nguyên tùy ý a,b sao cho a<b.
 Tính tổng các phần tử mảng có giá trị nằm trong đoạn [a,b].*/

#include<stdio.h>
#include<stdlib.h>

void nhap_mang(int *n, int *arr){
    int i;
    for(i = 0; i < *n; i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
} 
void tong(int n, int *arr){
    int i;
    int a,b;
    int sum = 0;
    int z,j;
    int m;
    printf("Nhap a<b.\n");
    printf("Nhap a: ");
    scanf("%d",&a);
    printf("Nhap b: ");
    scanf("%d",&b);
    for(i = 0; i < n; i++){
        if(arr[i] >= a && arr[i] <= b){  
            for(z = i; z < n - 1; z++){
                for(j = n - 1; j > z; j--){
                    if(arr[j] < arr[j - 1]){
                        m = arr[j - 1];
                        arr[j - 1] = arr[j];
                        arr[j] = m;
                    }
                }
             }
            printf("Cac phan tu trong [a,b]: %3d\n",arr[i]);
            sum = sum + arr[i];
        }
    }
    printf("\nTong cac phan tu trong [a,b]: %d",sum);
}

int main(){
    int n;
    int *arr;
    printf("Cap phat vung nho: ");
    scanf("%d",&n);
    arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Cap phat khong thanh cong!");
        exit(1);
    }else{
        printf("Cap phat thanh cong!\n");
        nhap_mang(&n,arr);
    }
    tong(n,arr);
 }
