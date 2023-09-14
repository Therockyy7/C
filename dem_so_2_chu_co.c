#include<stdio.h>
    void doc_so(int n){
        int du = n%10;
        int nguyen = n/10;
        if(nguyen == 1){
            printf("Muoi");
        }
        if(nguyen == 2){
            printf("Hai muoi");
        }
        if(nguyen == 3){
            printf("Ba muoi");
        }
        if(nguyen == 4){
            printf("Bon muoi");
        }
        if(nguyen == 5){
            printf("Ba muoi");
        }
        if(nguyen == 6){
            printf("sau muoi");
        }
        if(nguyen == 7){
            printf("Bay muoi");
        }
        if(nguyen == 8){
            printf("tam muoi");
        }
        if(nguyen == 9){
            printf("chin muoi");\
        }

        if(du == 1){
            printf(" mot");
        }
        if(du == 2){
            printf(" hai");
        }
        if(du == 3){
            printf(" ba");
        }
        if(du == 4){
            printf(" bon");
        }
        if(du == 5){
            printf(" nam");
        }
        if(du == 6){
            printf(" sau");
        }
        if(du == 7){
            printf(" bay");
        }
        if(du == 8){
            printf(" tam");
        }
        if(du == 9){
            printf(" chin");
        }
    }


int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    doc_so(n);
}