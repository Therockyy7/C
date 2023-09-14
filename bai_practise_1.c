//nhập vào số dương n và một mảng các phần tử từ ar[0] dến ar[n-1].
//hãy tìm GTLN và GTNN trên 

#include<stdio.h>

void nhap_mang(int *arr, int *n ){
    while ((*n) <= 0)// nếu như là n<=0 thì ta đng so sánh con trỏ mà ta cần là so sánh giá trị nên là (*n) <= 0
    {
        printf("Nhap n > 0: ");
        scanf("%d", n);
    }
    int i;
    for(i = 0; i < *n; i++){// int *n là khai báo biến con trỏ, còn *n là giá trị của con trỏ
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
        getchar();
    }
}
void MAX_MIN(int *arr, int *n, int *max, int *min){
    int i;
    for(i = 1; i < *n; i++){
        if((*max) < arr[i]){
            (*max) = arr[i];
        }
        if((*min) > arr[i]){
            (*min) = arr[i];
        }
    }
}


int main(){
    int n = 0;
    int arr[100];
    nhap_mang(arr,&n);// vì arr bản chất nó cũng là một con trỏ ròi nên ko cần &arr
    int max = arr[0], min = arr[0];//khởi tạo max và min bằng arr[0] trước khi nhập mảng, nên giá trị của arr[0] lúc đó là không xác định
    //. Bạn nên khởi tạo max và min bằng arr[0] sau khi nhập mảng
    MAX_MIN(arr,&n,&max,&min);
            printf("Max trong mang la: %d",max);
            printf("\nMin trong mang la: %d",min);

} 