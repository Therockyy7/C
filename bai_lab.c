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
        for(i = 0; i < n - 1; i++){
            for(j = n - 1; j > i; j--){
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
void exist(int n, int *arr){
    int so,i;
    printf("Ban muon xoa so nao: ");
    scanf("%d",&so);
    for(i = 0; i < n; i++){
        if(so != arr[i]){
            printf("arr[%d] = %d\n",i,arr[i]);
        }
        else{
            continue;
        }
    }
}

void opposion(){
    printf("Ban muon chon oppsion nao: \n");
    printf("1: xep tu Max - Min");
    printf("2:Xep tu Min - Max\n");
    printf("3:xoa tat ca 1 so trong mang\n");
   

}
void out(int n, int *arr){
    int i;
    for(i = 0; i < n; i++){
        printf("%3d",arr[i]);
    }
}
int main(){
    int n;
    int op;
    int *arr;
    printf("Cap phat bo nho cho arr: ");
    scanf("%d",&n);
    arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL)
    {
        printf("cap phat khong thanh cong!");
        exit(1);
    }else{
        printf("\nCap phat thanh cong!");
        nhap_mang(n,arr);
    }
    out(n,arr); 
    printf("\n");   
    opposion();
    scanf("%d",&op);
    switch (op)
    {
    case 1:
         array_Max_min(n,arr);  
        printf("\nXap xep lai tu MAX den MIN: ");
        out(n,arr);
        break;
    case 2:
        array_Min_max(n,arr);
        printf("Xap xep lai tu MIN den MAX ");
        out(n,arr);
        break;
    case 3:
        exist(n,arr);
        break;
    }

}