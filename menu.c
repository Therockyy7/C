#include<stdio.h>
#include<string.h>
void food(){
    printf("MENU\n");
    printf("1}Banh BAO CHAY----40K");
    printf("\n2}Banh bao tom----50k");
    printf("\n3}Banh bao nhan thit----40k");
    printf("\n4}Banh bao xiu mai-----30k");
    printf("\n5}Banh bao nam----50k");

}
void drink(){
    printf("--COFFEE--");
    printf("\n1)Espresso----100k");
    printf("\n2)Cafe Mocha----90k");
    printf("\n3)cappucino----90k");
    printf("\n4)Caramel Machiato----120k");
    printf("\n");
    printf("--TEA--");
    printf("\n5)Matcha----100k");
    printf("\n6)Citus----100k");
    printf("\n7)Earl Grey----90k");
    printf("\n8)Paper Mint----100k");

}


int main(){
    food();
    int Menu,tong_1=0,tong_2=0,mon,Drink;
    char QA[4]; 
    do{
    Nhap_lai:
    printf("\nChon menu ");
    scanf("%d",&Menu);
    switch(Menu){
        case 1:
            mon = 40;  
            printf("Ban muon chon tiep khong: (yes/no)\n");
            scanf("%s",&QA);
            break;
        case 2:
            mon = 50;            
            printf("Ban muon chon tiep khong: (yes/no)\n");
            scanf("%s",&QA);
            break;
        case 3:
            mon = 40;                               
            printf("Ban muon chon tiep khong: (yes/no)\n");
            scanf("%s",&QA);
            break;
        case 4:
            mon = 30;
            printf("Ban muon chon tiep khong: (yes/no)\n");
            scanf("%s",&QA);
            break;
        case 5:
            mon = 50;                      
            printf("Ban muon chon tiep khong: (yes/no)\n");
            scanf("%s",&QA);
            break;
        default:
            printf("khong co trong thuc don");
            printf("\nNhap lai");
            goto Nhap_lai;
    };
        tong_1 = tong_1 + mon;
    }while(strcmp(QA,"yes") == 0);
        
        
    printf("\nTong cac mon an: %dk",tong_1);

    printf("\nBan co chon nuoc khong? (yes/No)\n");
    scanf("%s",&QA);
    if(strcmp(QA,"yes") == 0){
        drink();
        Nhap_lai2:
        do{
        printf("\nChon do uong: ");
        scanf("%d",&Drink);
        switch(Drink){
            case 1:
                mon = 100;
                printf("\nBan muon chon tiep khong: (yes/no)");
                scanf("%s",&QA);
                break;
            case 2:
                mon = 90;
                printf("Ban muon chon tiep khong: (yes/no)\n");
                scanf("%s",&QA);
                break;
            case 3:
                mon = 90;
                printf("Ban muon chon tiep khong: (yes/no)\n");
                scanf("%s",&QA);
                break;
            case 4:
                mon = 120;
                printf("Ban muon chon tiep khong: (yes/no)\n");
                scanf("%s",&QA);
                break;
            case 5:
                mon = 100;
                printf("Ban muon chon tiep khong: (yes/no)\n");
                scanf("%s",&QA);
                break;
            case 6:
                mon = 100;
                printf("Ban muon chon tiep khong: (yes/no)\n");
                scanf("%s",&QA);
                break;
            case 7:
                mon = 90;
                printf("Ban muon chon tiep khong: (yes/no)\n");
                scanf("%s",&QA);
                break;
            case 8:
                mon = 100;
                printf("Ban muon chon tiep khong: (yes/no)\n");
                scanf("%s",&QA);
                break;
            default:
                printf("\nkhong co trong menu");
                printf("\nNhap lai");
                goto Nhap_lai2;

        };
         tong_2 = tong_2 + mon;
        }while(strcmp(QA,"yes") == 0);
        printf("\nTong do nuoc: %dk",tong_2);
        int Tong_all = tong_1 + tong_2;
        printf("\nTong toan bo mon: %dk",Tong_all);
    }
}