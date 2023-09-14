/*cho số dương n và mảng arr gồm n số nguyên tùy ý. Hãy:
a) Sắp xếp các phần tử trong mảng này theo thứ tự tăng dần từ trái qua phải.
b) Sắp xếp các phần tử trong mảng này theo thứ tự giảm dần từ trái qua phải.
c) Hiển thị kết quả trước và sau sắp xếp.  */

#include<stdio.h>
#include<stdlib.h>

void nhap_mang(int n, int *arr){
    int i;
        printf("\nxin moi nhap so mang: ");
        for(i = 0; i < n; i++){
        printf("\narr[%d] = ",i);
        scanf("%d",&arr[i]);
        }
}
void array_Max_min(int n, int *arr){
    int i,j;
    int m;
        for(i = 0; i < n - 1; i++){//i có nhiệm vụ là định vị arr để biết so sánh đến đâu sau lưu khóa giá trị lại 
            for(j = n - 1; j > i; j--){//j có nhiệm vụ là so sánh giá trị trong arr
                if(arr[j] > arr[j - 1]){
                    m = arr[j - 1];
                    arr[j - 1] = arr[j];
                    arr[j] = m;
                }
            }
        }   
}
void array_Min_max(int n, int *arr){
    int i,j;
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
        printf("%3d",arr[i]);
    }
}
int main(){
    int n;
    int *arr;
    printf("Cap phat bo nho cho arr: ");
    scanf("%d",&n);
    arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL)//kiểm tra xem cấp phát có thành công hay ko
    {
        printf("cap phat khong thanh cong!");
        exit(1);//thoát chương trình nếu ko thành công
    }else{
        printf("\nCap phat thanh cong!");
        nhap_mang(n,arr);
    }
    out(n,arr); 
    printf("\n");   
    array_Min_max(n,arr);
    printf("Xap xep lai tu MIN den MMAX ");
    out(n,arr);
    array_Max_min(n,arr);  
    printf("\nXap xep lai tu MAX den MIN: ");
    out(n,arr);

}