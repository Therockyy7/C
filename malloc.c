#include<stdio.h>
#include<stdlib.h>

void maxmin(int *ptr, int n, int *max, int*min){
    int i;
    for(i = 1; i < n; i++){
        if(*max < ptr[i]){
            *max = ptr[i];
        }
        if(*min > ptr[i]){
            *min = ptr[i];
        }
    }
}

void out(int max, int min){
    if(max == min){
        printf("khong co MAX/MIN");
    }
    else{
        printf("\nMax: %d",max);
        printf("\nMin: %d",min);

    }
}
int main(){
    int *ptr;
    int n,i,sum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));
    if(ptr == NULL){
        printf("Memory not allocated.\n");
        exit(0);
    }
    else{
        printf("Memory successfully allocated using malloc.\n");
        printf("\nEnter elments of array: ");
        for(i = 0; i < n; i++){
            printf("\nptr[%d] = ",i);
            scanf("%d",&ptr[i]);
        }
    }
    for(i = 0; i < n; i++){
        sum = sum + ptr[i];
    }
    printf("Tong cac phan tu: %d",sum);
    int max = ptr[0],min = ptr[0];
    maxmin(ptr,n,&max,&min);
    out(max,min);
}