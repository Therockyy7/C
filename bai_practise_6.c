/*Cho mảng số nguyên gồm n phần tử tùy ý nhập từ bàn phím ot files. Tính trung bình cộng các số chẵn, các số lẻ trong day.
In kết quả ra màn hình*/

#include<stdio.h>
#include<stdlib.h>

void nhap_mang(int *n, int *arr){
    int i;
    for(i = 0; i < *n; i++){
        printf("\narr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}
void chan_le(int n, int *arr){
    int i;
    int sum_chan = 0;
    int dem_chan = 0;
    int sum_le = 0;
    int dem_le = 0;
    for(i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            dem_chan = dem_chan + 1;
            sum_chan = sum_chan + arr[i];
        }
        else{
            dem_le = dem_le + 1;
            sum_le = sum_le + arr[i];
        }
    }
    float tbc_chan = (float)(sum_chan / dem_chan);
    float tbc_le = (float)sum_le / dem_le;

    printf("TBC cac so chan trong mang: %.2f",tbc_chan);
    printf("\nTBC cac so le trong mang: %.2f",tbc_le);

}


int main(){
    int n;
    int *arr;
    printf("Cap phat bo nho: ");
    scanf("%d",&n);
    arr =(int*)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Cap phat khong thanh cong!");
        exit(1);
    }else{
        printf("Cap phat thanh cong!");
        nhap_mang(&n,arr);
    }
    chan_le(n,arr);
}