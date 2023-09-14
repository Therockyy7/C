/*Cho mảng số nguyên gồm n phần tử tùy ý nhập từ bàn phím hoẳc file. Kiểm tra xem mảng này có đối xứng hay ko.
 Mảng đối xứng là mảng có các giá trị theo thứ tự ngược và xuôi như nhau. Ví dụ: 1 2 3 6 3 2 1 là mảng đối xứng. */

 #include<stdio.h>
 #include<stdlib.h>

int nhap_mang(int *n, int *arr){
    int i;
    int dem = 0;
    for(i = 0; i < *n; i++){
        dem = dem + 1;
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    return dem;
}
int ktra(int n, int *arr){
    int i,j;
    int k,l;
    j = n - 1;
    int x = n - (n + 1) / 2;
    for(i = 0; i <= x; i++){
        for(j; j >= x;){
            if(arr[i] == arr[j] ){
                if(i == j){
                    return 1;               
                }
                j--;
                break;
            }else{
                return 0;
            }
        }
    }
    
}


 int main(){
    int n;
    int *arr;
    int cout;
    printf("Cap phat bo nho: ");
    scanf("%d",&n);
    arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Cap phat khong thanh cong!");
        exit(1);
    }else{
        printf("Cap phat thanh cong!\n");
        cout = nhap_mang(&n,arr);
    }
    if(cout % 2 != 0){
        printf("kem tra doi xung!");
        ktra(n,arr);
        if(ktra(n,arr) == 1){
            printf("\nMang co doi xung!");
        }
        if(ktra(n,arr) == 0){
            printf("\nKhong doi xung!");
        }
    }else{
        printf("\nso mang khong the doi xung!");
    }
 }