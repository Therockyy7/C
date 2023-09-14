/*cho mảng số nguyên gồm n phần tử đc nhập từ bàn phím ỏ file. Hãy tìm phần tử thỏa mãn:
a) Là giá trị lớn thứ hai trong mảng
b) là gía trị thứ hai trong mảng */

#include<stdio.h>

void nhap_mang(int *n, int *arr){
    while (*n <= 0)
    {
        printf("Nhap n>0: ");
        scanf("%d", n);
    }
    int i;
    for(i = 0; i < *n; i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}
void maxmin(int *max, int *min, int n, int *arr){
    int i;
    for(i = 0; i < n; i++){
        if(*max < arr[i]){
             *max = arr[i];

        }
        if(*min > arr[i]){
            *min = arr[i];
        }

    }
}
void GTLT2(int *max, int *min, int n, int *arr, int *max2, int *min2){
    int i;
    for(i = 0; i < n; i++){
        if(*max2 < arr[i] && arr[i] != *max){
            *max2 = arr[i];
        }
        if(*min2 == *min){//để loại trường hợp giá trị đầu tiền của min2 = min thì nếu = thì gán giá trị mới cho min2 cho ô nhớ trong arr
            *min2 = arr[i];
        }
        if(*min2 > arr[i] && arr[i] != *min){
            *min2 = arr[i];
        }
    }
}
void out(int max2, int min2){
    int i;
    if( min2 == max2 ){
        printf(" khong co min max ");
    }
    else{
        printf("Gia tri lon thu 2: %d",max2);
        printf("\nGia tri nho thu 2: %d",min2);
    }
}

int main(){
    int n = 0;
    int arr[100];
    nhap_mang(&n,arr);
    int max = arr[0], min = arr[0];
    maxmin(&max,&min,n,arr);
    int max2 = arr[0], min2 = arr[0];
    GTLT2(&max,&min,n,arr,&max2,&min2);
    out(max2,min2);   
}