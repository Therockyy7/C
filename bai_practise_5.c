#include<stdio.h>
#include<math.h>
#include<stdbool.h>

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



int near(int n, int *arr, int x){
    int i;
    int h;
    int min = abs(arr[0] - x);
    for(i = 1; i < n; i++){
        h = abs(arr[i] - x);
        if(min > h){
            min = h;
        }
    }
    return min;
    
}

bool ktr_tra(int *b, int n, int v){
    int i;
    for(i = 0; i < n; i++){
        if(b[i] == v){
            return false;
        }
    }
    return true;
}

void cout(int n, int *arr, int min, int x){
    int i;
    int b[100];
    int dem = 0;
    for(i = 0; i < n; i++){
        if(min == abs(arr[i] - x) && ktr_tra(b,dem,arr[i])){
            printf("so gan nhat voi %d la %d\n",x,arr[i]);
            b[dem++] = arr[i];
        }
    }
}


int main(){
    int n = 0;
    int arr[100];
    int x;
    nhap_mang(&n,arr);
        printf("Nhap x: ");
        scanf("%d",&x);
    int min = near(n,arr,x);
    cout(n,arr,min,x);
}