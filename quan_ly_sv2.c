#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 100 // Khai báo hằng số cho kích thước của mảng cấu trúc

// khai báo kiểu SV là một biệt danh của struct Sinh_vien ở đầu chương trình
typedef struct Sinh_vien SV;

// khai báo struct date, struct diem và struct Sinh_vien trước khi sử dụng chúng
struct date
{
    int ngay;
    int thang;
    int nam;
};

struct diem{
    float Dim_chuyen_can;
    float diem_giua_ky;
    float diem_thi;
    float DTB;
};

struct Sinh_vien{
    int msv;
    char name[100];
    char gioitinh[5];
    struct date ngaysinh;
    int sdt;
    char lop[10];
    struct diem match;
};

void xoa_space(char str[]){
    int i = strlen(str) - 1;
    while (i >= 0 && str[i] == '\n'){
        str[i] = '\0';
        i--;
    }
}

void them_sinh_vien(SV *sinh_vien){
    printf("\nMSV: "); 
    scanf("%d", &sinh_vien->msv);
    printf("\nSDT: "); 
    scanf("%d", &sinh_vien->sdt);
    printf("\nTen: "); 
    fflush(stdin); 
    fgets(sinh_vien->name, sizeof(sinh_vien->name), stdin); 
    xoa_space(sinh_vien->name);
    printf("\nLop: "); 
    fflush(stdin); 
    fgets(sinh_vien->lop, sizeof(sinh_vien->lop), stdin); 
    xoa_space(sinh_vien->lop);
    printf("\nGioi tinh: "); 
    fflush(stdin); 
    fgets(sinh_vien->gioitinh, sizeof(sinh_vien->gioitinh), stdin); 
    xoa_space(sinh_vien->gioitinh);
    printf("\nNgay sinh: "); 
    scanf("%d%d%d", &sinh_vien->ngaysinh.ngay, &sinh_vien->ngaysinh.thang, &sinh_vien->ngaysinh.nam);
    printf("\nDiem chuyen can: "); 
    scanf("%f", &sinh_vien->match.Dim_chuyen_can);
    printf("\nDiem giua ky: "); 
    scanf("%f", &sinh_vien->match.diem_giua_ky);
    printf("\nDiem thi: "); 
    scanf("%f", &sinh_vien->match.diem_thi);
}

int tim_sv(SV sv[], int mssv, int n){
    int i;
    for (i = 0; i < n; i++){
        if(sv[i].msv == mssv){
            return i;
        }
    }
    return -1;
}

void in_sinh_vien(SV sv, int stt){
    printf("STT: %d     %6d \t 0%7d \t %20s \t%12s \t %9s \t%3d/%2d/%4d \t %6.2f \t %8.2f \t %8.2f\n",
        stt, sv.msv, sv.sdt, sv.name, sv.lop, sv.gioitinh, sv.ngaysinh.ngay, sv.ngaysinh.thang, sv.ngaysinh.nam,
        sv.match.Dim_chuyen_can, sv.match.diem_giua_ky, sv.match.diem_thi);
}

void menu_Quan_ly_sv(){
    printf("==========QUAN LY SINH VIEN===========\n");
    printf("0)Thoat chuong trinh\n");
    printf("1)Quan ly them sinh vien\n");
    printf("2)Quan ly sua\n");
    printf("3)Quan ly xoa\n");
    printf("4)Quan ly tim kiem\n");
    printf("7)Quan ly theo lop\n");
    printf("8)Hien thi danh sach\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

int main(){
    int QA1, QA2;
    int count = 0;
    SV sv[MAX];
    int i, n = 0;
    char ans[5];
    char ans2[5];
    char ans3[5];
    char ans4[5];
    int sua_mssv;
    int xoa_mssv;
    int dem_sv = 0;

    Nhaplai:
    menu_Quan_ly_sv();
    printf("\nchon: ");
    scanf("%d", &QA1);

    switch (QA1){
    case 0:
        printf("Thoat quan ly sinh vien\n");

        break;
    case 1:
        do{
                    dem_sv++;
                    them_sinh_vien(&sv[count]);
                    count++;

            printf("Nhap lai: [yes/no]");
                    scanf("%s", ans);
                } while (strcmp(ans, "yes") == 0);
        
                printf(" %17s \t %10s \t %20s \t %10s \t %10s \t %10s \t %5s \t %5s \t %5s",
                    "  MSSV", "SDT", "Ten", "Lop", "Gioi tinh", "Ngay sinh", "Diem chuyen can", "Diem giua ky", "Diem thi");

                for (i = 0; i < count; i++){
                    printf("\n");
                    in_sinh_vien(sv[i], i + 1);
                }

            printf("\nQuay lai menu? [yes/no]");
                scanf("%s", ans2);
                if (strcmp(ans2, "yes") == 0){
                    goto Nhaplai;
            }

    break;
        
    case 2:
        do{
                    printf("Sua sinh vien muon sua: ");
                    scanf("%d", &sua_mssv);
                    int id = tim_sv(sv, sua_mssv, count - 1);

                    if (id != -1){
                        them_sinh_vien(&sv[id]);
                     }
        
                    printf("Sua tiep khong? [yes/no]");
                    scanf("%s", ans3);
                } while (strcmp(ans3, "yes") == 0);

                printf(" %17s \t %10s \t %20s \t %10s \t %10s \t %10s \t %5s \t %5s \t %5s",
                    "  MSSV", "SDT", "Ten", "Lop", "Gioi tinh", "Ngay sinh", "Diem chuyen can", "Diem giua ky", "Diem thi");
                
                for (i = 0; i < count; i++){
                    printf("\n");
                    in_sinh_vien(sv[i], i + 1);
            }
        
    break;

case 3:
        printf("\nNhap MSSV can xoa: ");
                scanf("%d", &xoa_mssv);
                int id = tim_sv(sv, xoa_mssv, count - 1);

                if (id != -1){
                    for (i = id; i < count - 1; i++){
                sv[i] = sv[i + 1];
            }
                    count--;
                }

            printf("\nDanh sach sinh vien sau khi xoa:\n");
                printf(" %17s \t %10s \t %20s \t %10s \t %10s \t %10s \t %5s \t %5s \t %5s",
                    "  MSSV", "SDT", "Ten", "Lop", "Gioi tinh", "Ngay sinh", "Diem chuyen can", "Diem giua ky", "Diem thi");

                for (i = 0; i < count; i++){
                printf("\n");
                in_sinh_vien(sv[i], i + 1);
            }

                break;
        }

        
}



