/*nối chuỗi*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void trimend(char arr1[]){//Xóa kí tự xuống dòng
    int i;
    int n = strlen(arr1);

    for(i = n - 1; i >= 0; i--){
        if(arr1[i] == '\n'){
            arr1[i] = '\0';
            
        }
        else{
            break;
        }
    }
}

void noi_mang(char arr1[], char arr2[]){
    size_t n1 = strlen(arr1);
    size_t n2 = strlen(arr2);
    int i;
/*bất đầu nối từ cuối arr1 */
        for(i = n1; i < n1 + n2; i++){
            arr1[i] = arr2[i - n1];
        }
        arr1[n1 + n2] = '\0';

}

int main(){
    char arr1[100];
    printf("Nhap chuoi 1: ");
    fgets(arr1,sizeof(arr1),stdin);
    char arr2[100];
    printf("Nhap chuoi 2: ");
    fgets(arr2,sizeof(arr2),stdin);
        trimend(arr1);
        trimend(arr2);
    noi_mang(arr1,arr2);
    printf("Noi 2 mang: %s .",arr1);

}
